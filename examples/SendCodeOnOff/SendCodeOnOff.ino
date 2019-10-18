/*
  SendCodeOnOff.h - Example of the library for controlling DiO devices.
  Created by Charles GRASSIN, July 31, 2017.
  Under MIT License (free to use, modify, redistribute, etc.).
  www.charleslabs.fr

  This exemple blinks the DiO device with a period of 4 second.
  Prior to using it, you *must* set the "on" and "off" values using
  the RecordCode example. These values are indeed unique to each 
  module.

  Pin 2 must be connected to a 433MHz Tx module.
*/

#include <DiOremote.h>

const unsigned long ON_CODE  = 1278825104;
const unsigned long OFF_CODE = 1278825088;

const int TX_PIN = 2;

DiOremote myRemote = DiOremote(TX_PIN);

void setup()
{
  Serial.begin(9600);
}

void loop() {
  myRemote.send(ON_CODE);
  delay(2000);
  myRemote.send(OFF_CODE);
  delay(2000);
}
