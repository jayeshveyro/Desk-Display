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
| | **TOTAL** | | | | **₹1,010.00** | ||

### Cost Breakdown

* **Electronics:** ₹1010
* **3D Printing:** ₹238
* **Total Project Cost:** **₹1248**
  
## Circuit Design
<img width="3000" height="3215" alt="circuit_image" src="https://github.com/user-attachments/assets/b6ef0181-9aef-4596-ab7b-a45f8e9836a6" />


## CAD file
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

