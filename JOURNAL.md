---
title: "1U-CubeSat"
github: "https://github.com/rafay-os/1U-CubeSat"
description: "A compact custom designed 1U CubeSat telemetry and environmental sensing rig built around the esp32-cam module. Interated with an MPU6050 6 axis Imu and a BMP280 barometric pressure,temperature sensor over a robust 12c bus. Powered by a LiPo battery via an on board AMS1117-3.3V regulator and slide switch control, featuring dedicated programming headers and a professional 2-layer PCB layout branded with SUPARCO (Pakistan Space Agency)."
created_at: "2026-10-25"
total_time: "2h 12m"
---

# October 25, 2026: get my pcb.source file and BOM file

i did not know how to get pcb source file and BOM file in easyeda because I was a beginner in using easyeda so I searched google and with the help of gemini i easily get these two files for submitting my design.

![](https://fabricate.hackclub-assets.com/7a0fde5629342e38b46bc994d487116c918bed0acb1ba2411b8ec24fb8ff964e/image-png/Schematic.png)
![](https://fabricate.hackclub-assets.com/69a094b147713acd3d55928e4346fa2c5a73959d8cde24d8b2e325d591b005ee/image-png/PCB%20Layout.png)
![](https://fabricate.hackclub-assets.com/da95c3a267eceb40589d29ece55eb2f01c4d1e93ce396aad36deb278bfe29053/image-png/3d%20Render.png)

**Total time spent: 30m**

# October 25, 2026: JUST SUBMIT MY PROJECT FOR REVIEW

i just added my project in reviewing i searched and placed all components in my cart, and i am very interested in to build this project when ever i will recieve my grant

![](https://fabricate.hackclub-assets.com/bb27fbe39d7f3e7a41253afd8fbc684603d7c34d690ba33c1f20045f49bbcf92/image-png/ffdd2629-a2be-45ca-8aba-939862f7912.png)

**Total time spent: 18m**

# October 26, 2026: Added LoRa moduel

### Summary of Updates
# Project Journal - 1U-CubeSat Telemetry Payload

On October 26, 2026  the 1u-CubeSat telemetry payload hardware and documentation were fully finalized To resolve reviewer feedback a 915MHz LoRa module U6 was successfully integrated and routed via SPI to the esp32-cam while 10uF decoupling capacitors C1-C2 were added around the AMS1117-3.3 regulator to ensure stable power delivery The design also retained the 1x6 FTDI header for programming and maintaned clean I2C connections for the MPU6050 and BMP280 sensors Finally, the BOM was complete with local epro.pk pricing totaling PKR 3,238 and the layout successfully passed all EasyEDA DRC checks with zero errors

![](https://fabricate.hackclub-assets.com/c996260ed6c3487cd346e58ac32293a906eb74eb52ef9db147cc353f5ec1cda8/image-png/LoRa.png)
![](https://fabricate.hackclub-assets.com/e9203b7eeb396990fcee813d568fb95399b33f47de0348bfc6c6f1ccadb850f7/image-png/PcbLayout2.png)
![](https://fabricate.hackclub-assets.com/a6aff93261eeaf20b051abfae69109268673835d298be110f2ccd57e855f6611/image-png/Schematics2.png)

**Total time spent: 1h 24m**
