This is a Desk Display. It is a ESP-32 based based project which projects multiple things on the connected oled screen. For the project I have decided to display the calender on it. It can be used to display multiple things, like time,pc stats or a desk pet.

## Bill of Materials (BOM)
# Desk Display — Bill of Materials

| # | Component | SKU | Qty | Unit Price | Subtotal | Link |
|---|---|---:|---:|---:|---:|---|
| 1 | 5V Active Electromagnetic Buzzer — Pack of 5 | 616166 | 1 | ₹16.00 | ₹16.00 | [Robu](https://robu.in/product/5v-active-electromagnetic-buzzer-pack-of-5/) |
| 2 | GoldenMorning 0.96" I2C/IIC 4-Pin OLED Display — Blue | 617724 | 1 | ₹209.00 | ₹209.00 | [Robu](https://robu.in/product/0-96-inch-i2c-iic-oled-lcd-module-4pin-with-vcc-gnd-blue/) |
| 3 | Seeed Studio XIAO ESP32-C3 | 1341432 | 1 | ₹739.00 | ₹739.00 | [Robu](https://robu.in/product/seeed-studio-xiao-esp32c3-tiny-mcu-board-with-wi-fi-and-ble-battery-charge-supported-power-efficiency-and-rich-interface/) |
| 4 | TTP223 Touch Key Module — 2 pcs | 29793 | 1 pack | ₹13.00 | ₹13.00 | [Robu](https://robu.in/product/ttp223-touch-key-module-2pcs/) |
| 5 | 2.54mm 1×40 Pin Male Single Row Straight Short Header Strip — Pack of 3 | 1114172 | 2 | ₹9.00 | ₹18.00 | [Robu](https://robu.in/product/2-54mm-1x40-pin-male-single-row-straight-short-header-strip-pack-of-3/) |
| 6 | 10-Wire Male-to-Female Jumper Wires — 20cm | R160077 | 1 | ₹15.00 | ₹15.00 | [Robu](https://robu.in/product/10-wire-male-to-female-jumper-wires-20cm/) |
| 7 | Robu 3D Printing Services | 901845 | 1 | ₹250.00 | ₹250.00 | Robu |
| | **TOTAL** | | | | **₹1,260.00** | ||

### Cost Breakdown

* **Electronics:** ₹1010
* **3D Printing:** ₹250
* **Total Project Cost:** **₹1260**
  
## Circuit Design
<img width="3000" height="3215" alt="circuit_image" src="https://github.com/user-attachments/assets/b6ef0181-9aef-4596-ab7b-a45f8e9836a6" />


## CAD file
![image.png](https://cdn.hackclub.com/01a0b575-e466-71fd-b33c-caa8d87b836c/image.png)![image.png](https://cdn.hackclub.com/01a0b576-38f7-7ddc-9f72-1940fdf7b5b6/image.png)![image.png](https://cdn.hackclub.com/01a0b576-9ef0-7e7c-8478-facdc043bc0a/image.png)![image.png](https://cdn.hackclub.com/01a0b577-319b-7e43-8fa2-b9ff7fee155c/image.png)![image.png](https://cdn.hackclub.com/01a0b577-8855-72d2-b88b-7cc2b15df031/image.png)
![image.png](https://cdn.hackclub.com/01a0b577-e83d-7833-a0a8-060df1bc02e0/image.png)
<img width="567" height="296" alt="Screenshot 2026-09-15 103038" src="https://github.com/user-attachments/assets/b161a93d-1c4e-4722-be87-c7d1b1292f1a" />
<img width="639" height="452" alt="Screenshot 2026-09-15 102827" src="https://github.com/user-attachments/assets/327e8785-af6e-4478-bf30-76bc1b3b4a9f" />



## Workflow
                    POWER ON
                       |
                       v
             +-------------------+
             |   ROBO EYES MODE  |
             |                   |
             |  Animation 1      |
             |       ↕            |
             |  Animation 2      |
             +---------+---------+
                       |
                  SHORT PRESS
                       |
                       v
             +-------------------+
             |    TIME SCREEN    |
             +---------+---------+
                       |
                  SHORT PRESS
                       |
                       v
             +-------------------+
             |  CALENDAR SCREEN  |
             +---------+---------+
                       |
                  SHORT PRESS
                       |
                       v
             +-------------------+
             |  WEATHER SCREEN   |
             |    Faridabad      |
             +---------+---------+
                       |
                  SHORT PRESS
                       |
                       v
             +-------------------+
             |   ROBO EYES MODE  |
             +-------------------+

                  LONG PRESS
                      |
                      v
              +----------------+
              |  PETTING EYES  |
              |    ^  ^        |
              |   (  )         |
              +-------+--------+
                      |
                   RELEASE
                      |
                      v
                 Previous mode

