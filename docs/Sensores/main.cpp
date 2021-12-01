
#include <iostream>
#include "sensor.h"
#include "sensor_humedad.h"

using namespace std;

int main()
{
    // Creamos sensor humedad
    sensor_humedad s1_humedad(1);

    s1_humedad.obtener_valor();
    cout << "VALOR: "<<s1_humedad.get_valor() << endl;
    cout << "CONTADOR: "<<s1_humedad.get_contador() << endl;
    cout << "PARCELA: "<<s1_humedad.get_ident_parcela() << endl;





   }
