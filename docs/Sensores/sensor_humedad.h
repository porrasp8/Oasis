#ifndef SENSOR_HUMEDAD_H_INCLUDED
#define SENSOR_HUMEDAD_H_INCLUDED

#include "sensor.h"


class sensor_humedad: public sensor{



	public:

	sensor_humedad(int num_parcela): sensor(num_parcela){}

	// Toma el valor utilizando el sensor y lo pasa como parametro al metodo
	//  actualizar_valor(valor);
	void obtener_valor(){actualizar_valor(5);}


	private:

};



#endif // SENSOR_HUMEDAD_H_INCLUDED
