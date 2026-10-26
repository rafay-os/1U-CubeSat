#include <SPI.h>
#include <LoRa.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <MPU6050.h>

// --- LoRa Pin Definitions (SPI & Control) ---
// Connected via SPI: SCK=IO16, MISO=IO12, MOSI=IO13, SS/NSS=IO2, RST=IO4 (or available pin)
#define LORA_SCK  16
#define LORA_MISO 12
#define LORA_MOSI 13
#define LORA_SS   2
#define LORA_RST  4
#define LORA_DIO0 15

// --- I2C Sensor Definitions ---
MPU6050 mpu;
Adafruit_BMP280 bmp; // I2C interface

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  while (!Serial);
  Serial.println(ring "Initializing 1U-CubeSat Telemetry Payload...");

  // Initialize I2C Communication (SDA = IO13/IO15 custom or default pins, SCL = IO14)
  Wire.begin(13, 14);

  // Initialize MPU6050
  mpu.initialize();
  if (mpu.testConnection()) {
    Serial.println("MPU6050 connection successful!");
  } else {
    Serial.println("MPU6050 connection failed!");
  }

  // Initialize BMP280 Sensor
  if (!bmp.begin(0x76)) { // Default I2C address for BMP280 is 0x76 or 0x77
    Serial.println("Could not find a valid BMP280 sensor, check wiring!");
  } else {
    Serial.println("BMP280 initialized successfully.");
  }

  // Initialize SPI for LoRa
  SPI.begin(LORA_SCK, LORA_MISO, LORA_MOSI, LORA_SS);
  LoRa.setPins(LORA_SS, LORA_RST, LORA_DIO0);

  // Initialize LoRa at 915 MHz
  if (!LoRa.begin(915E6)) {
    Serial.println("Starting LoRa failed! Check your wiring and frequency.");
    while (1);
  }
  
  // Set sync word for private network (optional, default is 0x12)
  LoRa.setSyncWord(0xF3);
  Serial.println("LoRa Initialized Successfully at 915MHz!");
}

void loop() {
  // 1. Read MPU6050 Sensor Data (Accel & Gyro)
  int16_t ax, ay, az, gx, gy, gz;
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  // 2. Read BMP280 Sensor Data (Temperature & Pressure)
  float temperature = bmp.readTemperature();
  float pressure = bmp.readPressure() / 100.0F; // hPa
  float altitude = bmp.readAltitude(1013.25);    // Approximate altitude in meters

  // 3. Construct Telemetry Packet String
  String telemetryPacket = "SAT_ID:ROEX_1U | ";
  telemetryPacket += "Temp:" + String(temperature, 1) + "C | ";
  telemetryPacket += "Press:" + String(pressure, 1) + "hPa | ";
  telemetryPacket += "Alt:" + String(altitude, 1) + "m | ";
  telemetryPacket += "AX:" + String(ax) + " AY:" + String(ay) + " AZ:" + String(az);

  // 4. Print telemetry to Serial Monitor
  Serial.println("Sending Packet: " + telemetryPacket);

  // 5. Send Packet via LoRa Long-Range Radio
  LoRa.beginPacket();
  LoRa.print(telemetryPacket);
  LoRa.endPacket();

  // Delay before next telemetry broadcast (e.g., 2 seconds)
  delay(2000);
}
