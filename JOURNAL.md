---
title: "1U-CubeSat"
github: "https://github.com/rafay-os/1U-CubeSat"
description: "A compact custom designed 1U CubeSat telemetry and environmental sensing rig built around the esp32-cam module. Interated with an MPU6050 6 axis Imu and a BMP280 barometric pressure,temperature sensor over a robust 12c bus. Powered by a LiPo battery via an on board AMS1117-3.3V regulator and slide switch control, featuring dedicated programming headers and a professional 2-layer PCB layout branded with SUPARCO (Pakistan Space Agency)."
created_at: "2026-10-25"
total_time: "8h 12m"
---

# October 25, 2026: get my pcb.source file and BOM file
<!-- fabricate:entry 1240 -->

i did not know how to get pcb source file and BOM file in easyeda because I was a beginner in using easyeda so I searched google and with the help of gemini i easily get these two files for submitting my design.

![](https://fabricate.hackclub-assets.com/7a0fde5629342e38b46bc994d487116c918bed0acb1ba2411b8ec24fb8ff964e/image-png/Schematic.png)
![](https://fabricate.hackclub-assets.com/69a094b147713acd3d55928e4346fa2c5a73959d8cde24d8b2e325d591b005ee/image-png/PCB%20Layout.png)
![](https://fabricate.hackclub-assets.com/da95c3a267eceb40589d29ece55eb2f01c4d1e93ce396aad36deb278bfe29053/image-png/3d%20Render.png)

**Total time spent: 30m**

# October 25, 2026 (entry 2): JUST SUBMIT MY PROJECT FOR REVIEW
<!-- fabricate:entry 1242 -->

i just added my project in reviewing i searched and placed all components in my cart, and i am very interested in to build this project when ever i will recieve my grant

![](https://fabricate.hackclub-assets.com/10a92901f37eec3de4686f2b87be7eafacbfc31595987c6877012df8daf86422/image-png/0b200c71-2389-4326-bfcd-e9035156a092.png)
![](https://fabricate.hackclub-assets.com/92e5bf601b3f6f25b5fe84ea5ac714792fc7ed38fea1308a77082ece4e4acf95/image-png/4eec918f-898e-42da-bdb1-1711dc673cd5.png)

**Total time spent: 2h 6m**

# October 26, 2026: Added LoRa moduel
<!-- fabricate:entry 1292 -->

on October 26, 2026  a 915MHz LoRa module U6 was successfully integrated and routed via SPI to the esp32-cam while 10uF decoupling capacitors C1-C2 were added around the AMS1117-3.3 regulator to ensure stable power delivery

![](https://fabricate.hackclub-assets.com/c996260ed6c3487cd346e58ac32293a906eb74eb52ef9db147cc353f5ec1cda8/image-png/LoRa.png)
![](https://fabricate.hackclub-assets.com/e9203b7eeb396990fcee813d568fb95399b33f47de0348bfc6c6f1ccadb850f7/image-png/PcbLayout2.png)
![](https://fabricate.hackclub-assets.com/a6aff93261eeaf20b051abfae69109268673835d298be110f2ccd57e855f6611/image-png/Schematics2.png)

**Total time spent: 1h 24m**

# October 27, 2026: added antena and fix some other issues
<!-- fabricate:entry 1327 -->

the RF subsystem integrated a 915MHz LoRa module and SMT antenna connector with proper keepout clearance to prevent signal loss During the mechanical and PCB layout phase, standard 3mm M3 mounting holes rounded board corners, and widened power traces 0.6mm 0.8mm were implemented passing the EasyEDA Design Rule Check with zero errors Finally the BOM documentation was compiled with LCSC part numbers and direct supplier links into a structured CSV format for smooth GitHub tracking and manufacturing handover

![](https://fabricate.hackclub-assets.com/ba909b7bda4a195ee079899f1642d06a31ea04dab1119c3383589ae00d8df3c5/image-png/final.png)
![](https://fabricate.hackclub-assets.com/27054be7faa229f0f32a9285e3890ca11ed9acb84d86443538b9285647c15dd3/image-png/Updatedschematic.png)
![](https://fabricate.hackclub-assets.com/536393d849bd0f8c8584a3a6ac62d319660c338dd663197f29691fc7bd94bb2b/image-png/UpdatedPcb.png)

**Total time spent: 2h 18m**

# October 31, 2026: Design Changes After Review
<!-- fabricate:entry 1708 -->

i added 100nF and 10uF decouping capacitors near the LoRa module and connected them between 3.3V and GND.I added a solid GND copper plane on the bottom layer.I moved the antenna connector closer to the LoRa ANT pin and made the feedline shorter and straighter
i ran the DRC check and no errors were reported
The antenna feedline imedance still needs to be veified using the final PCBstackup

![](https://fabricate.hackclub-assets.com/77f1d7a6da60af4e4b084c097bee56cfe753f0b72537380c695d6cf639e6b9b7/image-png/UpdatedPcb.png)
![](https://fabricate.hackclub-assets.com/f24383cbe89bc14db12d220846edf7efdbe8f13a6b5740b62ebae667bbe4c5b9/image-png/Updatedschematic.png)
![](https://fabricate.hackclub-assets.com/f1be8d383316486801408eab65cbfb878d001a6bea39e6ee36f89c87d192dd45/image-png/3d_render.png)

**Total time spent: 1h 54m**
