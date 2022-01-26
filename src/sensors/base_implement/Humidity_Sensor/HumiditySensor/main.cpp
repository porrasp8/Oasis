
#include "Sensor.h"
#include "Humidity_Sensor.h"

using namespace std;

int main()
{

    // Const 
    const int PLOT_NUM = 1; 
    const int GPIO_IN = 20; 
    const int GPIO_OUT = 21; 


    int plot_num = 1;
    Humidity_Sensor s1_humedity(PLOT_NUM, GPIO_IN, GPIO_OUT);

    s1_humedity.update_value();
    cout << "VALUE: "<<s1_humedity.get_value() << endl;
    cout << "CONT: "<<s1_humedity.get_cont() << endl;
    cout << "PLOT: "<<s1_humedity.get_plot_ident() << endl;


}
