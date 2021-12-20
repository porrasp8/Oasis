#include "Sensor.h"
#include "Humidity_Sensor.h"

  // Const 
  const int PLOT_NUM = 1; 
  const int GPIO_IN = 0; 

void setup() 
{
   Serial.begin(9600);
    int plot_num = 1;
    Humidity_Sensor s1_humedity(PLOT_NUM, GPIO_IN);
}

void loop() 
{ 

       s1_humedity.update_value();
      Serial.println( "VALUE : ");
      Serial.println(s1_humedity.get_value());
      Serial.println( "CONT : ");
      Serial.println(s1_humedity.get_cont());
      Serial.println( "PLOT : ");
      Serial.println(s1_humedity.get_plot_ident());
      delay(1000);

}
