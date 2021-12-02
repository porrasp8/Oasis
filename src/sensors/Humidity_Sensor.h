#ifndef SENSOR_HUMEDAD_H_INCLUDED
#define SENSOR_HUMEDAD_H_INCLUDED

#include "Sensor.h"


class Humidity_Sensor:public Sensor{

	public:

        //~Constructor
		Humidity_Sensor(int plot_num): Sensor(plot_num){}

        // update_value() implementation
		virtual void update_value() { set_value(3); increment_cont(); }

    private: // Add pinout


};



#endif // SENSOR_HUMEDAD_H_INCLUDED
