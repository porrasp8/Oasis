#include <iostream>
#include "luz.h"

using namespace std;


Luz::Luz(int plot_number, bool init_status){

    plot_ident = plot_number;
    status = init_status;

    if(init_status){
        last_on_time = clock();
    }

}

void Luz::set_status(bool newstatus){

    // Switch off/on
    if((newstatus) && (status != newstatus)){
        last_on_time = clock(); // Time refresh
    }

    status = newstatus;
}

long long Luz::get_time(){

    clock_t final_time;

    if(last_on_time == 0){final_time = 0;}
    else{final_time = clock() - last_on_time;}

    cout << final_time;

    long long time = (long long)final_time / CLOCKS_PER_SEC;

    return time;
}
