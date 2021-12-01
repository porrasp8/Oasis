#ifndef SENSOR_H_INCLUDED
#define SENSOR_H_INCLUDED

// De esta clase herdaria cada sensor

class sensor{

	public:

	//~Inicializadores
	sensor(void);
	sensor(int num_parcela){identificador_parcela = num_parcela;}
	// sensor(Sensor sensor);

	//~Funciones Basicas
	void reset_contador(){contador = 0;}

	//~Getters
	float get_valor(){return valor_medido;} // Faltaria aumentar contador
	int get_contador(){return contador;}
	int get_ident_parcela(){return identificador_parcela;}

	protected:
	void actualizar_valor(int new_value){valor_medido = new_value;}

	private: // O protected segun preferencia

	float valor_medido = 0;
	int contador = 0; // Valores medidos desde arranque
	int identificador_parcela = 0;  // Numero de la parcela en la que se encuentra
	bool estado = true; // True --> endendido, False --> apagado

	static const int MAX_PARCELAS = 4; // Para tratar errores
};


#endif // SENSOR_H_INCLUDED
