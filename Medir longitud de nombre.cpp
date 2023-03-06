#include <string.h>
#include <stdio.h>

int main (){
    char nombre [20];
    int size;

    //Esta parte solicita el nombre.
    printf ("Ingrese su nombre:\n");
    scanf("%s", nombre);

    //Esta linea mide el número de caracteres ingresados en el nombre.
    size = strlen (nombre);

    //Esta linea muestra el número de caracteres máximos permitidos.
    //size = sizeof (nombre);

    //Esta linea muestra la salida del programa.
    printf ("Bienvenido, %s. Su nombre mide %d caracteres", nombre, size);
}