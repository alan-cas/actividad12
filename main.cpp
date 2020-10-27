#include <iostream>
#include "arreglo.h"
using namespace std;


int main() {

    Arreglo arreglo;

    arreglo.insertar_final("uno");
    arreglo.insertar_final("dos");
    arreglo.insertar_final("tres");
    arreglo.insertar_final("cuatro");
    arreglo.insertar_final("cinco");
    arreglo.insertar_final("seis");
    arreglo.insertar_final("siete");
    arreglo.insertar_final("ocho");

    for (size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }

    cout<<endl;
    arreglo.insertar_inicio("Alan");
    arreglo.insertar_inicio("castaneda");


    for (size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }

    return 0;
}
