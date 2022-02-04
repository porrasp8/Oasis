#ifndef LIGHT_H_INCLUDED
#define LIGHT_H_INCLUDED

#include <ctime>

class Light{

    public:

        //~ Constructors
        Light(void);
        Light(int plot_number, int gpio,bool init_status = false);

        // Getters
        int get_plot_ident(){ return plot_ident;}
        bool get_status(){return status;}
        double get_time();

        //Setters
        void set_status(bool newstatus);


    private:

        int plot_ident = 0; // Number of plot
        bool status;        // On/of status
        clock_t last_switch_time;  // Save the last switch time
        int gpio_out; 
        
        const int MINS = 60;
        
        void switch_status(bool newstatus); // Private function to switch the light 

};


#endif // LIGHT_H_INCLUDED
