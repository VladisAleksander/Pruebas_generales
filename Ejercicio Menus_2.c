#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nombre[50];
    int opcion, subopcion;
    
    // Solicitar el nombre del usuario
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    
    // Mostrar el menú de opciones
    printf("Bienvenido/a %s!\n", nombre);
    printf("Seleccione una opción:\n");
    printf("1. Opción 1\n");
    printf("2. Opción 2\n");
    printf("3. Salir\n");
    
    // Solicitar la elección del usuario
    printf("Ingrese el número de su elección: ");
    scanf("%d", &opcion);
    
    // Procesar la elección del usuario
    while (opcion != 3) {
        if (opcion == 1) {
            // Mostrar el sub menú de la opción 1
            printf("Ha elegido la opción 1.\n");
            printf("Seleccione una subopción:\n");
            printf("1. Subopción 1\n");
            printf("2. Subopción 2\n");
            printf("3. Volver\n");
            
            // Solicitar la elección del usuario en el sub menú
            printf("Ingrese el número de su elección: ");
            scanf("%d", &subopcion);
            
            // Procesar la elección del usuario en el sub menú
            while (subopcion != 3) {
                if (subopcion == 1) {
                    printf("Ha elegido la subopción 1 de la opción 1.\n");
                } else if (subopcion == 2) {
                    printf("Ha elegido la subopción 2 de la opción 1.\n");
                } else {
                    printf("Opción inválida. Intente nuevamente.\n");
                }
                
                // Solicitar la elección del usuario en el sub menú
                printf("Ingrese el número de su elección: ");
                scanf("%d", &subopcion);
            }
            
        } else if (opcion == 2) {
            printf("Ha elegido la opción 2.\n");
        } else {
            printf("Opción inválida. Intente nuevamente.\n");
        }
        
        // Mostrar el menú de opciones
        printf("Seleccione una opción:\n");
        printf("1. Opción 1\n");
        printf("2. Opción 2\n");
        printf("3. Salir\n");
        
        // Solicitar la elección del usuario
        printf("Ingrese el número de su elección: ");
        scanf("%d", &opcion);
    }
    
    // Mostrar las elecciones realizadas por el usuario
    printf("Gracias por utilizar el programa, %s!\n", nombre);
    printf("Ha elegido la opción %d.\n", opcion);
    
    return 0;
}