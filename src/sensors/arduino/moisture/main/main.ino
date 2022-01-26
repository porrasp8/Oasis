#include "Sensor.h"
#include "Humidity_Sensor.h"

  // Const 
  const int PLOT_NUM = 1; 
  const int GPIO_IN = 32; 

  int plot_num = 1;
  Humidity_Sensor s1_humedity(PLOT_NUM, GPIO_IN);

void setup() 
{
   Serial.begin(9600);
}

void loop() 
{ 

      s1_humedity.update_value();
      Serial.print( "VALUE : ");
      Serial.println(s1_humedity.get_value());
<<<<<<< HEAD:src/originalSensor/Humidity_tets/main/main.ino
      Serial.print( "CONT : ");
      Serial.println(s1_humedity.get_cont());
      Serial.print( "PLOT : ");
      Serial.println(s1_humedity.get_plot_ident());
=======
   //   Serial.println( "CONT : ");
   //   Serial.println(s1_humedity.get_cont());
   //   Serial.println( "PLOT : ");
   //   Serial.println(s1_humedity.get_plot_ident());
>>>>>>> 9246483dcc8716e508b23a1edc1c9340b24f05f8:src/sensors/arduino/moisture/main/main.ino
      delay(1000);

}
