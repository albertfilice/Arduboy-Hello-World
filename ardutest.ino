/*
    Hello World
*/

#include <SPI.h>
#include "Arduboy.h"

Arduboy display;

void setup()
{
    SPI.begin();
    display.start();
    display.setTextSize(1);
    display.setCursor(0, 0);
    display.print("1.0.0.4");
    display.display();
    delay(1000);

}

void loop()
{
    display.clearDisplay();
    display.setCursor(30,30);
    display.print("Hello World");
    display.display();
}


