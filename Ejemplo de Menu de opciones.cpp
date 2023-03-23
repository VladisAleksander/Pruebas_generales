#include <math.h>
#include <stdio.h>

void menu();
void submenuUno();
void submenuDos();

int main()
{
    char nombre[20];
    int opcion;

    do
    {
        menu();
        int opcion;

        switch ( opcion )
        {
            case 1: submenuUno();
                    break;

            case 2: submenuDos();
                    break;

            case 3: printf( "\n\n Fin de la linea");
                    break;

            case 4: printf( "\n\n Opcion no valida");
                    break;
         }
    }while (opcion != '4');

    return 0;

}
         
void menu(){

        printf("======Bienvenido======\n");
        printf("Por favor, ingrese su nombre:\n");
        scanf("%s", nombre);
        printf("Bienvenido, %s. Que desea ordenar?\n", nombre);
        printf( "\n   1. Pasta.");
        printf( "\n   2. Sopa.");
        printf( "\n   3. Pozole.");
        printf( "\n   4. Salir." );
        printf( "======================");
        printf( "\n\n   Selecciona una opci%cn (1-4): ");

        scanf( "%d", &opcion );

}

void submenuUno(){
        int opcion;

        do{
                printf("======Bienvenido======\n");
                printf("Por favor, selecione un postre:\n");
                printf( "\n   1. Pay de queso.");
                printf( "\n   2. Capirotada.");
                printf( "\n   3. Pastel.");
                printf( "\n   4. Regresar");
                printf( "\n   5. Volver a empezar");
                printf( "\n   6. Salir." );
                printf( "======================");
                printf( "\n\n   Selecciona una opci%cn (1-6): ");

                scanf( "%d", &opcion ); 

                switch(opcion){
                        case 1: printf("%s, su pasta y pay de queso estarán listos en breve", nombre);
                                break;
                        
                        case 2: printf("%s, su pasta y capirotada estarán listos en breve", nombre);
                                break;

                        case 3: printf("%s, su pasta y pastel estarán listos en breve", nombre);
                                break;
                        
                        case 4: 
                                break;

                        default: printf("\n\n OPCION NO VALIDA");
                                break;
                }
        }while (opcion != '4');
}
        /* Inicio del anidamiento */
