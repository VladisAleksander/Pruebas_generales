#include <stdio.h>

char nombre[20];
char op[3];

int main(){

    printf("Introduzca su nombre \n");
    scanf("%s", nombre);
    printf("Bienvenido, %s Que desea ordenar? \n", nombre);
    printf("A.- Spaghetti \n");
    printf("B.- Sopa \n");
    printf("C.- Camarones \n");
    scanf("%s", op);
    if(op[0] == 'a'){
        printf("%s, su orden de Spaghetti esta lista", nombre);
    }
    else if(op[0] == 'b'){
        printf("%s, su orden de Sopa esta lista", nombre);
    }
    else if(op[0] == 'c'){
        printf("%s, su orden de Camarones esta lista", nombre);
    }
    else{
        printf("Eleccion no valida, elija una opcion valida");
    }

}