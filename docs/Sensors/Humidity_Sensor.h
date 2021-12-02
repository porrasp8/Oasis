#ifndef SENSOR_HUMEDAD_H_INCLUDED
#define SENSOR_HUMEDAD_H_INCLUDED

#include "Sensor.h"


class Humidity_Sensor: public Sensor{



	public:

		Humidity_Sensor(int plot_num): Sensor(plot_num){}

		// Toma el valor utilizando el sensor y lo pasa como parametro al metodo
		//  update_value(valor);
		void obtain_value(){update_value(5.0);} // Test


	private:

};



#endif // SENSOR_HUMEDAD_H_INCLUDED
