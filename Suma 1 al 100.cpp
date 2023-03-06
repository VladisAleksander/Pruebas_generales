#include <stdio.h>

using namespace std;

int main(){
    int i, suma = 0;
    for (i = 1; i <= 100; i++){
        //cout<< i << endl;
        suma = suma + i;
    }

    //cout<< "La suma de los numeros es: "<<suma;

    printf ("La suma de los numeros consecutivos del 1 hasta el 100 es: %i", suma);

    return 0;

}