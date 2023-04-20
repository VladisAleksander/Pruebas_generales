#include <stdio.h>

int main() {
    int matriz[0][0];
    int num1, num2;
    int i, j;
    int fila;
    int opcion;
    char nombre[50];

    // Solicitamos el nombre del usuario para poder referirnos al mismo

    printf ("*Bienvenido al programa de tabla de multiplicar personalizada*\n\n");
    printf ("Por favor, introduzca su nombre:\n"); // Solicitamos el nombre al usuario
    scanf("%s", nombre); // Guardamos el nombre del usuario

    // Inicio del programa

    system ("cls"); // Limpiamos la consola
    printf ("*Bienvenido al programa de tabla de multiplicar personalizada*\n\n");
    printf ("Bienvenido, %s\n\n", nombre); // Mensaje de bienvenida
    printf ("Para crear su tabla de multiplicar, ingrese los datos solicitados\n\n");

    // Solicitamos el número de filas para la matriz
    system ("cls"); // Limpiamos la consola
    printf ("*Bienvenido al programa de tabla de multiplicar personalizada*\n\n");
    printf ("Bienvenido, %s\n\n", nombre);
    printf ("Para crear su tabla de multiplicar, ingrese los datos solicitados\n\n");
    printf ("Ingrese el n%cmero de filas para la tabla:\n", 163); // Solicitar al usuario el número de filas
    while (scanf("%d", &fila) != 1) { // Verificamos que solo se ingrese un número
        printf ("Error: Debe ingresar un n%cmero entero. Int%cntelo de nuevo.\n", 163, 130); // Mensaje de error
        printf ("Ingrese el numero de filas para la tabla:\n");
        while (getchar() != '\n'); // Limpiamos el buffer de entrada
    }

    // Limpiamos la consola y mostramos el resultado en pantalla

    system ("cls"); // Limpiamos la consola
    printf ("*Bienvenido al programa de tabla de multiplicar personalizada*\n\n");
    printf ("Bienvenido, %s\n\n", nombre);
    printf ("Disfrute de su tabla de multiplicar personalizada:\n\n");

    for( i = 0; i < fila; i++){ // Ajustamos el número de filas
        for( j = 0; j <= i; j++){ // Ajustamos el número de columnas
            matriz[fila][fila] = (i+1) * (j+1); // Multiplicamos los números de las filas por las columnas para ingresarlos a la matriz
            printf("%d\t", matriz[fila][fila]); // Imprimir la matriz con el resultado final
        }
        printf("\n");
    }

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
}