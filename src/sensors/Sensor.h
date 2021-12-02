#ifndef SENSOR_H_INCLUDED
#define SENSOR_H_INCLUDED

// From this class inherits each sensor

class Sensor{

	public:

		//~Constructors
		Sensor(void);
		Sensor(int plot_num){plot_ident = plot_num;}
		//Sensor(Sensor sensor);

		//~Basics functions
		void reset_cont(){cont = 0;}

		//~Getters
		float get_value(){return value;} // Faltaria aumentar contador
		int get_cont(){return cont;}
		int get_plot_ident(){return plot_ident;}

	protected:

		void update_value(int new_value){value = new_value;}

	private: // Or protected(not decided yet)

		float value = 0; // Curren measured value
		int cont = 0; // Measured values after start
        int plot_ident = 0;  // Number of plot
		bool state = true; // true --> on, False --> off

		static const int MAX_PLOTS = 4; // For error treatment
};

#endif
