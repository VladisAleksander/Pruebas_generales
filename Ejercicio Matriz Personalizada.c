#include <stdio.h>

int main() {
    int matriz[0][0];
    int num1, num2;
    int i, j;
    int col, fila;
    int opcion;
    char nombre[50];

    // Solicitamos el nombre del usuario para poder referirnos al mismo

    printf ("*Bienvenido al programa de matrices personalizadas*\n\n");
    printf ("Por favor, introduzca su nombre:\n");
    scanf("%s", nombre); // Guardamos el nombre del usuario

    // Inicio del programa

    system ("cls"); // Limpiamos la consola
    printf ("*Bienvenido al programa de matrices personalizadas*\n\n");
    printf ("Bienvenido, %s\n\n", nombre);
    printf ("Para crear su matr%cz ingrese los datos solicitados\n\n", 161);

    // Solicitamos el primer número de la matriz
    printf ("Ingrese el primer n%cmero:\n", 163);
    while (scanf("%d", &num1) != 1) { // Verificamos que solo se ingrese un número
        printf ("Error: Debe ingresar un n%cmero entero. Int%cntelo de nuevo.\n", 163, 130); // Mensaje de error
        printf ("Ingrese el primer numero:\n");
        while (getchar() != '\n'); // Limpiamos el buffer de entrada
    }

    // Solicitamos el segundo número de la matriz
    system ("cls"); // Limpiamos la consola
    printf ("*Bienvenido al programa de matrices personalizadas*\n\n");
    printf ("Bienvenido, %s\n\n", nombre);
    printf ("Para crear su matr%cz ingrese los datos solicitados\n\n", 161);
    printf ("Ingrese el segundo n%cmero:\n", 163);
    while (scanf("%d", &num2) != 1) { // Verificamos que solo se ingrese un número
        printf ("Error: Debe ingresar un n%cmero entero. Int%cntelo de nuevo.\n", 163, 130); // Mensaje de error
        printf ("Ingrese el segundo numero:\n");
        while (getchar() != '\n'); // Limpiamos el buffer de entrada
    }

    // Solicitamos el número de filas para la matriz
    system ("cls"); // Limpiamos la consola
    printf ("*Bienvenido al programa de matrices personalizadas*\n\n");
    printf ("Bienvenido, %s\n\n", nombre);
    printf ("Para crear su matr%cz ingrese los datos solicitados\n\n", 161);
    printf ("Ingrese el n%cmero de filas para la matr%cz:\n", 163, 161);
    while (scanf("%d", &fila) != 1) { // Verificamos que solo se ingrese un número
        printf ("Error: Debe ingresar un n%cmero entero. Int%cntelo de nuevo.\n", 163, 130); // Mensaje de error
        printf ("Ingrese el numero de filas para la matriz:\n");
        while (getchar() != '\n'); // Limpiamos el buffer de entrada
    }

    // Solicitamos el número de columnas para la matriz
    system ("cls"); // Limpiamos la consola
    printf ("*Bienvenido al programa de matrices personalizadas*\n\n");
    printf ("Bienvenido, %s\n\n", nombre);
    printf ("Para crear su matr%cz ingrese los datos solicitados\n\n", 161);
    printf ("Ingrese el n%cmero de columnas para la matr%cz:\n", 163, 161);
    while (scanf("%d", &col) != 1) { // Verificamos que solo se ingrese un número
        printf ("Error: Debe ingresar un n%cmero entero. Int%cntelo de nuevo.\n", 163, 130); // Mensaje de error
        while (getchar() != '\n'); // Limpiamos el buffer de entrada
    }

    // Limpiamos la consola y mostramos el resultado en pantalla

    system ("cls"); // Limpiamos la consola
    printf ("*Bienvenido al programa de matrices personalizadas*\n\n");
    printf ("Bienvenido, %s\n\n", nombre);
    printf ("Disfrute de su matr%cz personalizada:\n\n", 161);
    for (i = 0; i < fila; i++) { // Ajustamos el número de filas
        for (j = 0; j < col; j++) { // Ajustamos el número de columnas
            if ((i + j) % 2 == 0) { // Comparamos números par e impar para asignarlos a la matriz
                matriz[fila][col] = num1; // Si es impar
            } else {
                matriz[fila][col] = num2; // Si es par
            }
            printf ("| %d |", matriz[fila][col]); // Imprimimos la matriz final
        }
        printf ("\n");
    }

    // Menú de opciones para decidir si volver a comenzar el ciclo o salir del programa
    do {
        printf ("\n\n%cQu%c desea hacer ahora?\n\n", 168, 130);
        printf ("1. Volver a comenzar\n");
        printf ("2. Salir\n\n");
        scanf ("%d", &opcion);

        switch (opcion){
            case 1: 
                printf ("Volviendo a comenzar...\n");
                system ("cls"); // Limpiamos la consola
                main(); // Iniciamos el programa nuevamente
            
            case 2:
                printf ("Saliendo...\n");
                printf ("End of the Line\n"); // Referencia a Tron
                break;
            
            default:
                printf ("Opci%cn inv%clida. Por favor, selecione una opci%cn v%clida\n", 162, 160, 162, 160);
                break;
        }

    } while (opcion != 2);
    return 0;
}