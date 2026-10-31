# 1U-CubeSat Telemetry Rig

Project Overview
The 1U-CubeSat Telemetry Rig is an open source payload for sening environment and space. It uses a small design to prototype space exploration and record data from the atmosphere. To achieve its functions it uses the ESP32-CAM microcontroller It includes an MPU6050 6-axis IMU to track motion plus a BMP280 sensor to measure barometric pressure and temperature  this project exists because I wanted to create a telemetry system that is modular and inexpensive It fits within the physical limits of a standard 1U CubeSat. The system provides wireless connectivity but also transmits data from sensors in real time.

---
> **CAD Source & 3D Model:** Located in the `/cad/` directory (`PCB1.epro2` source & `pcb.step` 3D model).
Visual Documentation. Note, that Antena module is not avalible at epro.pk so i give i take it from thriftyrcstore.com


## 1. Schematic
![Schematic](Images/Updatedschematic.png)
The schematic diagram illustrates how the ESP32-CAM, MPU6050, BMP280, AMS1117 regulator and power switching circuitry connect.

## 2. Add LoRa Module
![LoRa Module](Images/LoRa.png)
Added LoRa Module in my pcb for better ground connection.

## 3. PCB Layout
![Pcb Layout](Images/UpdatedPcb.png)
In this figure the top and bottom copper layout shows the routing of traces as well as the placement of decoupling capacitors. There is a specific amount of empty space around the antenna.

## 4.3D Rendered
![3D Rendered](Images/final.png)
As shown in the 3D assembly render, the telemetry board contains specific parts & SUPARCO branding.

No.,Quantity,Comment,Designator,Footprint,Value,Manufacturer Part,Manufacturer,Supplier Part,Supplier,Link,Unit Price (PKR),Total Price (PKR),Price/part verification notes
1,2,10uF,"C1,C2",C0402,10uF,CL05A106MQ5NUNC,SAMSUNG,C15525,EPro,https://epro.pk/product/10uf-25v-radial-electrolytic-capacitor/,8.0,16.0,User-provided price; verify linked listing matches C0402 ceramic part.
2,1,HDR-M_2.54_1x6P,H1,HDR-TH_6P-P2.54-V-M-1,1x6 Male Header,Header 2.54mm 1x6,Generic,HDR-1X6,EPro,https://epro.pk/product/10-pin-2x5-2-54mm-box-header-idc-male-socket-straight/,18.0,18.0,"User-provided price; link is 2x5 box header, while BOM designator H1 is 1x6 header. Verify correct part."
3,1,MST-12D18G3 Surface Mount Slide Switch,SW1,SW-SMD_MST-12D18G4-SPDT-SLIDE-SWITCH,SPDT Switch,MST-12D18G3,SHOU HAN,C49023766,EPro,https://epro.pk/product/slider-on-off-switch/,15.0,15.0,User-provided price.
4,1,ESP32-CAM,U1,COMM-TH_16P-L40.0-W27.0-P2.54_ESP32-CAM,ESP32-CAM Module,ESP32-CAM,Ai-Thinker,ESP32-CAM-MOD,EPro,https://epro.pk/product/esp32-cam-ov2640-board-in-pakistan/,1530.0,1530.0,User-provided price.
5,1,MPU6050,U2,QFN-24_L4.0-W4.0-P0.50-BL,6-Axis Gyro/Accelerometer,MPU6050,InvenSense,MPU-6050-MOD,EPro,https://epro.pk/product/mpu6050-gy-521-3-axis-analog-gyroscope-sensor-in-pakistan/,490.0,490.0,"User-provided price; linked product is MPU6050 module, verify footprint vs bare QFN."
6,1,BMP280,U3,LGA-8_L2.5-W2.0-P0.65_AMP6127,Barometric Pressure Sensor,BMP280,Bosch,BMP280-MOD,EPro,https://epro.pk/product/bmp280-pressure-sensor-in-pakistan/,350.0,350.0,User-provided price; verify exact module/footprint.
7,1,B2B-PH-K-S,U4,CONN-TH_B2B-PH-K-S,2-Pin JST PH Connector,B2B-PH-K-S,JST,JST-PH-2P,EPro,https://epro.pk/product/1500mah-3-7v-18650-battery-pack/,280.0,280.0,"User-provided price; link is battery pack with JST connector, not necessarily bare JST connector."
8,1,AMS1117-3.3,U5,SOT-223-3_L6.5-W3.4-P2.30-LS7.0-BR,3.3V LDO Voltage Regulator,AMS1117-3.3,AMS,AMS1117-3.3-SMD,EPro,https://epro.pk/product/ams1117-3-3v-module-adjustable-and-fixed-voltage-regulator-in-pakistan/,65.0,65.0,User-provided price; verify exact fixed 3.3V SMD AMS1117 part vs module listing.
9,1,915MHz LoRa Module,U6,WIRELM-SMD_16P-L16.0-W16.0-P2.00_LORA-CC68-915MHZ-TCXO,915MHz LoRa,LORA-CC68-C1-915MHz,G-NiceRF,LORA-915MHZ,EPro,https://epro.pk/product/sx1276-lora-module-915mhz-rfm95-in-pakistan/,1800.0,1800.0,User-provided price; verify exact LoRa module model.
10,1,SMTWEM220STR,U7,SMD-1_BD4.4-D2.8-H2.0,IPEX/U.FL Antenna Connector,SMTWEM220STR,YIYUAN,IPEX-SMD,thriftyrcstore,https://thriftyrcstore.com/product/915mhz-t-type-antenna-ipex1-ufl-connector-for-elrs-rx-ipex1-78mm-in-pakistan/,,,"User provided original price Rs. 1,000 but current sale price not specified; confirm current checkout price."
11,1,PCB Fabrication,PCB,PCB,Custom PCB,,,,,,,,PCB fabrication quote not included in component links; enter actual manufacturer quote.
12,1,PCB Assembly,Assembly,Assembly,PCB Assembly,,,,,,,,Assembly cost requires assembler quote.
13,1,Shipping,Shipping,Shipping,Shipping,,,,,,,,Shipping depends on order and destination; enter checkout amount.

