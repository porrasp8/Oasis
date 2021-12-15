#include "Sensor.h"
#include "Humidity_Sensor.h"
#include "Arduino.h"


int main()
{

    Serial.begin(9600);

    // Const 
    const int PLOT_NUM = 1; 
    const int GPIO_IN = 0; 


    int plot_num = 1;
    Humidity_Sensor s1_humedity(PLOT_NUM, GPIO_IN);

    for (int i = 0; i < 10; i++){
      s1_humedity.update_value();
      Serial.println( "VALUE : ");
      Serial.println(s1_humedity.get_value());
      Serial.println( "CONT : ");
      Serial.println(s1_humedity.get_cont());
      Serial.println( "PLOT : ");
      Serial.println(s1_humedity.get_plot_ident());
      delay(1000);
    }


}
