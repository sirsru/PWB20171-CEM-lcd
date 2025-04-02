PWB20171-CEM-lcd
This is a full tutorial on using this LCD that appears to have nearly no information about it online.
For this lcd on the whole internet, i could only find one resource, and the datasheet is also for a slightly differently named lcd, being called DMC20171NY-LY-B instead of PWB20171-CEM or PWB20171NY-LY-B.

Table of contents

1. [to start things off](#some-pictures-of-the-LCD)
2. [some pictures of the lcd](#some-pictures-of-the-LCD)
3. [pinout](#Pinout)
4. [wiring](#wiring)
5. [power information](#power-info)

To start things off
------------------------
Now I think that this is a rather interesting display, first of all because I got it for 3 dollars, but also because every characyer on the display is unusually large, making everything more visible. 
From the websites I have visited that sold this display, for example ([Alibaba seller](https://www.alibaba.com/product-detail/LCD-SCREEN-DISPLAY-PWB20171-CEM-CD102_1600104206172.html)) seemed to always be selling the lcds for industrial settings. 

some pictures of the LCD
----------------------------
<img src="https://github.com/user-attachments/assets/6432dec8-c6b6-4edf-946e-1091749c74cb" width="300">


<img src="https://github.com/user-attachments/assets/a9941f27-45b4-4fcb-ab18-185fdf0ab2e7" width="300">

<img src="https://github.com/user-attachments/assets/228c1c9f-a691-499d-b9df-56612428f1f1" width="300">


LCD code for arduino Mega
---------------------------
>this code is written in C for the arduino IDE

```
#include <LiquidCrystal.h>

//4 bit mode
LiquidCrystal lcd(7, 8, 1, 2, 3, 4); // RS, E, D1, D2, D3, D4

void setup() {
    lcd.begin(20, 1);
    lcd.print("Hello, World!");
    lcd.cursor();
    lcd.setCursor(0,1);
}

void loop() {
  for (int i = 0; i < 20; i++)
  {
    lcd.setCursor(i, 1); 
    delay(150);
  }
}

```

Pinout
------------------------------
The following is the pinout for the lcd display facing up.

> **KEY**

```
CTR = contrast
Gnd = ground
RS = Register select
RW = read/write
E = enable
NA = not used for 4 bit, but techincally can be used for 8 bit
D# = data pin
```

> **PINOUT**
```
________    which is equivalent to :    ____________
| 13 14|                                | D3   D4  |
| 11 12|                                | D1   D2  |
| 9  10|                                | NA   NA  |
| 7   8|                                | NA   NA  |
| 5   6|                                | RW   E   |
| 3   4|                                | CTR  RS  |
| 1   2|                                | GND +5v  |
________                                ___________
```

> **Wiring**
--------------------
To wire the data pins from the lcd to an arduino or other microcontroller for 4 bit mode, connect:

```
D1 to D1
D2 to D2
D3 to D3
D4 to D4
```
power info
------------------
Contrast: I found that 3.3V was enough to crank up the contrast on this display<br>
Backlight: This one was finnicky, the backlight takes 5V and 0.2A, any higher and the resistor (I **reccommend** using) will get hot rather quickly<br>
Other: for the last supply, [pinout](#pinout) you **need** to supply 5V, otherwise the display may not work.


Resources
--------------------
>Datasheet
`https://www.alldatasheet.com/datasheet-pdf/pdf/121301/OPTREX/DMC20171NY-LY-B.html`

