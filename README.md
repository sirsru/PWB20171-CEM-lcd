PWB20171-CEM-lcd
This is a full tutorial on using this LCD that appears to have nearly no information about it online.
For this lcd on the whole internet, i could only find one resource, and the datasheet is also for a slightly differently named lcd, being called DMC20171NY-LY-B instead of PWB20171-CEM or PWB20171NY-LY-B.

Table of contents

1. [to start things off](#some-pictures-of-the-LCD)
2. [some pictures of the lcd](#some-pictures-of-the-LCD)

To start things off
------------------------


some pictures of the LCD
----------------------------
<img src="https://github.com/user-attachments/assets/6432dec8-c6b6-4edf-946e-1091749c74cb" width="300">
![image](https://github.com/user-attachments/assets/a9941f27-45b4-4fcb-ab18-185fdf0ab2e7)
![image](https://github.com/user-attachments/assets/228c1c9f-a691-499d-b9df-56612428f1f1)
<img src="[https://github.com/user-attachments/assets/228c1c9f-a691-499d-b9df-56612428f1f1" width="48">


LCD code for arduino Mega
---------------------------
>this code is written in C for the arduino IDE

```
#include <LiquidCrystal.h>

//4 bit mode
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // RS, E, D4, D5, D6, D7

void setup() {
    lcd.begin(16, 2);
    lcd.print("Hello, World!");
}

void loop() {
}
```

Pinout
------------------------------
The

Resources
--------------------
>Datasheet
`https://www.alldatasheet.com/datasheet-pdf/pdf/121301/OPTREX/DMC20171NY-LY-B.html`

