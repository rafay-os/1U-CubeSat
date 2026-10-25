# 1U-CubeSat Telemetry Rig

Project Overview & Motivation
The 1U-CubeSat Telemetry Rig is an open source payload for sensing environment and space. It uses a small design to prototype space exploration and record data from the atmosphere. To achieve its functions, it uses the ESP32-CAM microcontroller. It includes an MPU6050 6-axis IMU to track motion plus a BMP280 sensor to measure barometric pressure and temperature - this project exists because I wanted to create a telemetry system that is modular and inexpensive. It fits within the physical limits of a standard 1U CubeSat. The system provides wireless connectivity but also transmits data from sensors in real time.

---

Visual Documentation

Schematic
(Insert screenshot of your EasyEDA schematic here)
The schematic diagram illustrates how the ESP32-CAM, MPU6050, BMP280, AMS1117 regulator and power switching circuitry connect.

PCB Layout
(Insert screenshot of your 2D PCB layout here)
In this figure the top and bottom copper layout shows the routing of traces as well as the placement of decoupling capacitors. There is a specific amount of empty space around the antenna.

3. 3D Render
(Insert 3D render screenshot of your board here)
As shown in the 3D assembly render, the telemetry board contains specific parts & SUPARCO branding.

---

Bill of Materials (BOM)

| Item | Description | Quantity | Unit Price (USD) | Total Price (USD) | Buying Link |
| :--- | :--- | :---: | :---: | :---: | :--- |
| 10uF Capacitor | C1, C2 (C0402) | 2 | $0.05 | $0.10 | [LCSC
