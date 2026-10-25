#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <MPU6050.h>
MPU6050 mpu;
Adafruit_BMP280 bmp; // I2C
void setup() {
Serial.begin(115200);
while (!Serial);
Serial.println(F("1U CubeSat Telemetry Rig - Placeholder Firmware Initializing..."));
Wire.begin(14, 15);
mpu.initialize();
if (mpu.testConnection()) {
Serial.println(F("MPU6050 connection successful!"));
  } else {
    Serial.println(F("MPU6050 connection failed! Check wiring."));
  }


  if (!bmp.begin(0x76)) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring!"));
  } else {
    Serial.println(F("BMP280 sensor initialized successfully!"));
  }
  
  Serial.println(F("System Ready. Entering telemetry loop..."));
}

void loop() {
  int16_t ax, ay, az;
  int16_t gx, gy, gz;
  mpu.getAcceleration(&ax, &ay, &az);
  mpu.getRotation(&gx, &gy, &gz);
  float temperature = bmp.readTemperature();
  float pressure = bmp.readPressure() / 100.0F; // hPa
  Serial.println(F("--- CUBESAT TELEMETRY PACKET ---"));
  Serial.print("Accel (X,Y,Z): "); Serial.print(ax); Serial.print(", "); Serial.print(ay); Serial.print(", "); Serial.println(az);
  Serial.print("Temp: "); Serial.print(temperature); Serial.println(" *C");
  Serial.print("Pressure: "); Serial.print(pressure); Serial.println(" hPa");
  Serial.println("--------------------------------");

  delay(2000); // 2 second delay for telemetry update interval
}