#include "light.h"

// Const
const int PLOT_NUM = 1;
const int GPIO_IN = 4;
const bool ON = true; 
const bool OFF = false; 

Light light1(PLOT_NUM, GPIO_IN);

void setup()
{
 Serial.begin(9600);
 pinMode(GPIO_IN, OUTPUT);
}

void loop()
{

  light1.set_status(OFF);
  delay(1000);
  Serial.print( "STATUS : ");
  Serial.println(light1.get_status());
  Serial.print( "TIME: ");
  Serial.println(light1.get_time());

  light1.set_status(ON); 
  Serial.print( "TIME: ");
  Serial.println(light1.get_time());
  
  while(light1.get_time() < (8*60)){
      Serial.print( "TIME: ");
      Serial.println(light1.get_time());
      Serial.flush();
    }
  light1.set_status(OFF); 

  while(light1.get_time() < (16*60)){}

  delay(1000);

}
