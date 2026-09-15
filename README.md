This is a Desk Display. It is a ESP-32 based based project which projects multiple things on the connected oled screen. For the project I have decided to display the calender on it. It can be used to display multiple things, like time,pc stats or a desk pet.

## Bill of Materials (BOM)

| # | Component                                                              | SKU     |   Qty | Unit Price |    Total |
| - | ---------------------------------------------------------------------- | ------- | ----: | ---------: | -------: |
| 1 | 38-Pin CP2102 ESP32 WiFi + Bluetooth Development Board with Type-C USB | 1794191 |     1 |       ₹429 |     ₹429 |
| 2 | 1.8" TFT LCD Module, 128 × 160, 4 I/O                                  | 62060   |     1 |       ₹289 |     ₹289 |
| 3 | Robu Online FDM 3D Printing Service                                    | 901845  |     1 |       ₹238 |     ₹238 |
|   | **Total**                                                              |         | **3** |            | **₹956** |

### Cost Breakdown

* **Electronics:** ₹718
* **3D Printing:** ₹238
* **Total Project Cost:** **₹956**
  
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

