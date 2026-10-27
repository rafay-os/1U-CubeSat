# 1U-CubeSat Telemetry Rig

Project Overview
The 1U-CubeSat Telemetry Rig is an open source payload for sening environment and space. It uses a small design to prototype space exploration and record data from the atmosphere. To achieve its functions it uses the ESP32-CAM microcontroller It includes an MPU6050 6-axis IMU to track motion plus a BMP280 sensor to measure barometric pressure and temperature  this project exists because I wanted to create a telemetry system that is modular and inexpensive It fits within the physical limits of a standard 1U CubeSat. The system provides wireless connectivity but also transmits data from sensors in real time.

---
> **CAD Source & 3D Model:** Located in the `/cad/` directory (`PCB1.epro2` source & `pcb.step` 3D model).
Visual Documentation

## 1. Schematic
![Schematic](Images/Schematic.png)
The schematic diagram illustrates how the ESP32-CAM, MPU6050, BMP280, AMS1117 regulator and power switching circuitry connect.

## 2. Updated Schematic
![Updated Schematic](Images/Updatedschematic.png)
Added a dedicated external antenna solder pad P1 connected to the LoRa module U6 ensuring a clear antenna keepout zone for reliable 915MHz telemetry transmission

## 3. Add LoRa Module
![LoRa Module](Images/LoRa.png)
Added LoRa Module in my pcb for better ground connection.


## 4. PCB Layout
![PCB Layout](Images/PCB%20Layout.png)
In this figure the top and bottom copper layout shows the routing of traces as well as the placement of decoupling capacitors. There is a specific amount of empty space around the antenna.

## 5. Updated Pcb Layout
![Updated Pcb](Images/UpdatedPcb.png)
Added and properly positioned 10uF input C1 and output C2 decoupling capacitors directly adjacent to the AMS1117-3.3V voltage regulator pins to minimize voltage spikes and high-frequency noise Increased the track widths for power `BATT_POS` `5V` `3V3` and ground nets to reduce parasitic inductance and prevent voltage drops

## 6. 3D Render
![3D Render](Images/3d%20Render.png)
As shown in the 3D assembly render, the telemetry board contains specific parts & SUPARCO branding.

## 7. Updated 3D Rendered
![Updated 3D Rendered](Images/final.png)
Incorporated rounded board corners with standard M3 mounting holes 3mm for seamless mechanical integration inside the 1U CubeSat frame

---
### Bill of Materials (BOM) & Local Procurement (epro.pk)

| No. | Quantity | Comment | Designator | Footprint | Manufacturer Part | Supplier | Price (PKR) |
|:---:|:---:|:---|:---:|:---:|:---|:---:|---:|
| 1 | 2 | 10uF | C1, C2 | C0402 | CL05A106 (SAMSUNG) | epro.pk | 20 |
| 2 | 1 | HDR-M_2.54_1x6P | H1 | HDR-TH_6P | HDR (Generic) | epro.pk | 30 |
| 3 | 1 | Slide Switch | SW1 | SW-SMD | MST-12D18G3 (SHOU HAN) | epro.pk | 50 |
| 4 | 1 | ESP32-CAM | U1 | ESP32-CAM | ESP32-CAM (Ai-Thinker) | epro.pk | 1,450 |
| 5 | 1 | MPU6050 | U2 | QFN-24 | MPU6050 (TDK/InvenSense) | epro.pk | 450 |
| 6 | 1 | BMP280 | U3 | LGA-8 | BMP280 (Bosch) | epro.pk | 480 |
| 7 | 1 | B2B-PH-K-S | U4 | CONN-TH | B2B-PH-K-S (JST) | epro.pk | 40 |
| 8 | 1 | AMS1117-3.3 | U5 | SOT-223 | AMS1117-3.3 (AMS) | epro.pk | 58 |
| 9 | 1 | 915MHz LoRa | U6 | WIRELM-SMD | LORA-CC68 (G-NiceRF) | epro.pk | 640 |
| **Total** | | | | | | | **Rs. 3,238** |
