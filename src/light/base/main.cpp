#include <iostream>
#include "luz.h"

using namespace std;

const int TIME_TO_SLEEP = 10;

int main()
{

    Luz luz1(1);

    cout << "PLOT: " << luz1.get_plot_ident() << endl;
    cout << "STATUS: " << luz1.get_status() << endl;
    cout << "TIME: " << luz1.get_time() << endl;

    luz1.set_status(true);
    cout << "PLOT: " << luz1.get_plot_ident() << endl;
    cout << "STATUS: " << luz1.get_status() << endl;
    cout << "TIME: " << luz1.get_time() << endl;

    while(luz1.get_time() < 0.16){}
    cout << "TIME: " << luz1.get_time() << endl;

    return 0;
}
