#ifndef LUZ_H_INCLUDED
#define LUZ_H_INCLUDED

#include <ctime>

class Luz{

    public:

        //~ Constructors
        Luz(void);
        Luz(int plot_number, bool init_status = false);

        // Getters
        int get_plot_ident(){ return plot_ident;}
        bool get_status(){return status;}
        long long get_time();

        //Setters
        void set_status(bool newstatus);


    private:

        int plot_ident = 0; // Number of plot
        bool status;        // On/of status
        clock_t last_on_time;  // Save the last switch on time to calculates the total work time

};


#endif // LUZ_H_INCLUDED
