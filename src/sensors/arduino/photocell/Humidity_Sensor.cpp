#include "Sensor.h"
#include "Humidity_Sensor.h"
#include "Arduino.h"



 void Humidity_Sensor::update_value(){
   int reading  = analogRead(pin_in);
   set_value(reading); 
   increment_cont();
  }
