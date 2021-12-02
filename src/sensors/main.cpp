
#include <iostream>
#include "Sensor.h"
#include "Humidity_Sensor.h"

using namespace std;

int main()
{
    int plot_num = 1;
    // Creamos sensor humedad
    Humidity_Sensor s1_humedity(plot_num);

    s1_humedity.update_value();
    cout << "VALUE: "<<s1_humedity.get_value() << endl;
    cout << "CONT: "<<s1_humedity.get_cont() << endl;
    cout << "PLOT: "<<s1_humedity.get_plot_ident() << endl;


}
