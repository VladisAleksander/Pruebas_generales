#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nombre[50];
    int opcion_menu, opcion_submenu;
    
    printf("\nBienvenido!\n");
    printf("Por favor, ingrese su nombre: \n");
    fgets(nombre, 50, stdin);
    nombre[strcspn(nombre, "\n")] = 0;  // elimina el salto de línea final
    system("cls");
    
    printf("\nHola, %s\n", nombre);
    printf("Por favor selecciona un plato principal.\n\n");
    
    printf("\nMenu:\n");
    printf("1. Pasta\n");
    printf("2. Sopa\n");
    printf("3. Pozole\n");
    printf("4. Salir\n");
    printf("Seleccione una opcion del menu: ");
    scanf("%d", &opcion_menu);
    
    switch (opcion_menu) {
        case 1:
            printf("\nSubmenú:\n");
            printf("1. Subopción 1\n");
            printf("2. Subopción 2\n");
            printf("3. Subopción 3\n");
            printf("Ingrese una opción del submenú: ");
            scanf("%d", &opcion_submenu);
            printf("\n%s ha elegido la opción 1 del menú y la opción %d del submenú.\n", nombre, opcion_submenu);
            break;
        case 2:
            printf("\nSubmenú:\n");
            printf("1. Subopción 1\n");
            printf("2. Subopción 2\n");
            printf("3. Subopción 3\n");
            printf("Ingrese una opción del submenú: ");
            scanf("%d", &opcion_submenu);
            printf("\n%s ha elegido la opción 2 del menú y la opción %d del submenú.\n", nombre, opcion_submenu);
            break;
        case 3:
            printf("\nSubmenú:\n");
            printf("1. Subopción 1\n");
            printf("2. Subopción 2\n");
            printf("3. Subopción 3\n");
            printf("Ingrese una opción del submenú: ");
            scanf("%d", &opcion_submenu);
            printf("\n%s ha elegido la opción 3 del menú y la opción %d del submenú.\n", nombre, opcion_submenu);
            break;
        case 4:
            printf("\nFin de la linea");
            break;
        default:
            printf("\nOpción inválida.\n");
            break;
    } while (opcion_menu != '4');
    
    return 0;
}