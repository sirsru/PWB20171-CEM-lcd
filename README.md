PWB20171-CEM-lcd
This is a full tutorial on using this LCD that appears to have nearly no information about it online.
For this lcd on the whole internet, i could only find one resource, and the datasheet is also for a slightly differently named lcd, being called DMC20171NY-LY-B instead of PWB20171-CEM or PWB20171NY-LY-B.

Table of contents

1. to start things off
2. some pictures of the lcd

To start things off
------------------------


some pictures of the LCD
----------------------------

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

