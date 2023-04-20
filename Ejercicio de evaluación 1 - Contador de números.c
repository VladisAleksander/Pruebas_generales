#include <stdio.h>

int main(void){

    int numero, cociente, divisor, contador, opcion;
    char nombre[50];

    cociente = 0;
    divisor = 1;
    contador = 0;

    // Solicitamos el nombre del usuario para poder referirnos al mismo

    printf ("*Bienvenido al contador de d%cgitos*\n\n", 161);
    printf ("Por favor, introduzca su nombre:\n"); // Solicitamos el nombre al usuario
    scanf("%s", nombre); // Guardamos el nombre del usuario

    // Inicio del programa

    system ("cls"); // Limpiamos la consola
    printf ("*Bienvenido al contador de d%cgitos*\n\n", 161);
    printf ("Bienvenido, %s\n\n", nombre);
    printf ("Ingrese el n%cmero:\n", 163, 161); // Solicitar al usuario el número de filas
    while (scanf("%d", &numero) != 1) { // Verificamos que solo se ingrese un número
        printf ("Error: Debe ingresar un n%cmero entero. Int%cntelo de nuevo.\n", 163, 130); // Mensaje de error
        while (getchar() != '\n'); // Limpiamos el buffer de entrada
    }

    while (cociente !=1){
        contador++;
        divisor = divisor * 10;
        cociente = numero / divisor;

    if (cociente == 1){ // Calcula la cantidad de dígitos del número ingresado
        printf("El n%cmero tiene %d digitos\n", 163, contador + 1); // Muestra la cantidad de dígitos del número ingresado
        }//Fin del If

    if (cociente < 1){ // Verifica si el número ingresado tiene sólo 1 dígito
        printf("El n%cmero tiene %d digitos\n", 163, contador); // Muestra la cantidad de dígitos del número ingresado
        cociente = 1;
        } //Fin del If

    }//Fin del while
    
    // Menú de opciones para decidir si volver a comenzar el ciclo o salir del programa
    do {
        printf ("\n\n%cQu%c desea hacer ahora?\n\n", 168, 130);
        printf ("1. Volver a comenzar\n");
        printf ("2. Salir\n\n");
        scanf ("%d", &opcion); // Guardar la opción ingresada por el usuario

        switch (opcion){
            case 1: 
                printf ("Volviendo a comenzar...\n");
                system ("cls"); // Limpiamos la consola
                main(); // Iniciamos el programa nuevamente
            
            case 2:
                system ("cls"); // Limpiamos la consola
                printf ("\nEnd of line\n"); // Referencia a Tron
                break;
            
            default:
                printf ("Opci%cn inv%clida. Por favor, selecione una opci%cn v%clida\n", 162, 160, 162, 160); // Mensaje de error en caso de que el usuario ingrese una opción inválida
                break;
        }

    } while (opcion != 2);

    return 0;

}//Fin de la linea.