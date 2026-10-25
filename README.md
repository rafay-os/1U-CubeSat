# 1U-CubeSat Telemetry Rig

Project Overview & Motivation
The 1U-CubeSat Telemetry Rig is an open source payload for sensing environment and space. It uses a small design to prototype space exploration and record data from the atmosphere. To achieve its functions, it uses the ESP32-CAM microcontroller. It includes an MPU6050 6-axis IMU to track motion plus a BMP280 sensor to measure barometric pressure and temperature - this project exists because I wanted to create a telemetry system that is modular and inexpensive. It fits within the physical limits of a standard 1U CubeSat. The system provides wireless connectivity but also transmits data from sensors in real time.

---

Visual Documentation

## 1. Schematic
<img src="Images/Schematic.png" alt="Board Schematics"
The schematic diagram illustrates how the ESP32-CAM, MPU6050, BMP280, AMS1117 regulator and power switching circuitry connect.

## 2. PCB Layout
<img src="Images/PCB Layout.png" alt="PCB Layout of Board"
In this figure the top and bottom copper layout shows the routing of traces as well as the placement of decoupling capacitors. There is a specific amount of empty space around the antenna.

## 3. 3D Render
<img src="Images/3D Render.png" alt="3d Image of Board"
As shown in the 3D assembly render, the telemetry board contains specific parts & SUPARCO branding.

---

## Bill of Materials (BOM)

| Item | Description | Quantity | Unit Price (USD) | Total Price (USD) | Buying Link |
| :--- | :--- | :---: | :---: | :---: | :--- |
| **10uF Capacitor** | C1, C2 (C0402) | 2 | $0.05 | $0.10 | [LCSC C15525](https://www.lcsc.com/product-detail/C15525.html) |
| **Pin Header** | H1 (HDR-TH_6P-P2.54-V-M-1) | 1 | $0.20 | $0.20 | [LCSC Header](https://www.lcsc.com/) |
| **Slide Switch** | SW1 (SW-SMD_MST-12D18G4-SPDT) | 1 | $0.15 | $0.15 | [LCSC C49023766](https://www.lcsc.com/product-detail/C49023766.html) |
| **ESP32-CAM** | U1 (COMM-TH_16P-ESP32-CAM) | 1 | $4.50 | $4.50 | [LCSC C277946](https://www.lcsc.com/product-detail/C277946.html) |
| **MPU6050** | U2 (QFN-24 6-Axis IMU) | 1 | $1.20 | $1.20 | [LCSC C9900042518](https://www.lcsc.com/product-detail/C9900042518.html) |
| **BMP280** | U3 (LGA-8 Pressure Sensor) | 1 | $0.95 | $0.95 | [LCSC C83291](https://www.lcsc.com/product-detail/C83291.html) |
| **JST Connector** | U4 (CONN-TH_B2B-PH-K-S) | 1 | $0.10 | $0.10 | [LCSC C9900170324](https://www.lcsc.com/product-detail/C9900170324.html) |
| **AMS1117-3.3** | U5 (SOT-223 Voltage Regulator) | 1 | $0.20 | $0.20 | [LCSC C6186](https://www.lcsc.com/product-detail/C6186.html) |
| **TOTAL COST** | *Total Estimated Hardware Cost* | | | **$7.40** | |
