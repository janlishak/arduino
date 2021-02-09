#include "Adafruit_Thermal.h"
Adafruit_Thermal printer(&Serial1);

void setup() {
  Serial.begin(1200);
  Serial1.begin(9600);
  
  printer.begin();
  printer.setCodePage(CODEPAGE_CP850);
}

void loop()
{
  if (Serial.available()>0){
    char ch = Serial.read();
    Serial.write(ch);
    printer.write(ch);
  }
}
