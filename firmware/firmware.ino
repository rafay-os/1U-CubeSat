#include <Wire.h>
#include <SPI.h>
#include <LoRa.h>               // LoRa library (e.g. Sandeep Mistry / RadioLib)
#include <Adafruit_MPU6050.h>
#include <Adafruit_BMP280.h>

// --- LoRa Pin Definitions for ESP32-CAM ---
#define LORA_SCK   14
#define LORA_MISO  12
#define LORA_MOSI  13
#define LORA_SS    15
#define LORA_RST   2
#define LORA_DIO0  4            // ya DIO1 depending on PCB routing

#define LORA_BAND  915E6        // 915 MHz frequency

Adafruit_MPU6050 mpu;
Adafruit_BMP280 bmp;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  // 1. Initialize Sensors (I2C)
  Wire.begin(14, 15);           // AAPKE SCHEMATIC KE SDA/SCL PINS
  if (!mpu.begin()) {
    Serial.println("MPU6050 initialization failed!");
  }
  if (!bmp.begin(0x76)) {
    Serial.println("BMP280 initialization failed!");
  }

  // 2. Initialize SPI for LoRa
  SPI.begin(LORA_SCK, LORA_MISO, LORA_MOSI, LORA_SS);
  LoRa.setPins(LORA_SS, LORA_RST, LORA_DIO0);

  if (!LoRa.begin(LORA_BAND)) {
    Serial.println("LoRa initialization failed! Check wiring/antenna.");
    while (1);
  }

  // Set LoRa Tx Power & Bandwidth
  LoRa.setTxPower(17);          // 17 dBm transmission power
  Serial.println("1U-CubeSat Telemetry Ready!");
}

void loop() {
  // Read Sensors
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);
  float pressure = bmp.readPressure() / 100.0F; // hPa
  float altitude = bmp.readAltitude(1013.25);

  // Create Telemetry Packet
  String packet = "CUBESAT_DATA,";
  packet += String(a.acceleration.x) + ",";
  packet += String(a.acceleration.y) + ",";
  packet += String(a.acceleration.z) + ",";
  packet += String(pressure) + ",";
  packet += String(altitude);

  // Send via LoRa RF Antenna
  LoRa.beginPacket();
  LoRa.print(packet);
  LoRa.endPacket();

  Serial.println("Sent Packet: " + packet);
  delay(1000); // Send telemetry every 1 second
}
