/**
 * @file Humidity_Sensor.h
 * @brief Example of an object that inherits from Sensor.h
 * @date 03/12/2021
 */

#ifndef SENSOR_HUMEDAD_H_INCLUDED
#define SENSOR_HUMEDAD_H_INCLUDED

#include "Sensor.h"


class Humidity_Sensor:public Sensor{

	public:

        //~Constructor
		Humidity_Sensor(int plot_num, int gpio_in, int gpio_out): Sensor(plot_num){pin_in = gpio_in; pin_out = gpio_out;}

        // update_value() implementation
		virtual void update_value() { set_value(3); increment_cont(); }

    private: // Add pinout

    int pin_in;
    int pin_out; // To control the status of the sensor(on//of), uneccesary in some cases

};



#endif // SENSOR_HUMEDAD_H_INCLUDED
