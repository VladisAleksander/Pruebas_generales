#include <stdio.h>

int main(){

    int numero1;
    int numero2;
    int resultado;

    printf("----Fractales-----\n");
    printf("Ingresa el numero:\n");
    scanf("%d", &numero1);
    
    numero2 = numero1;

    for(int i = 1; i < numero1; i++){
        numero2 = numero2*i;
        printf("--%dx%d\n", numero2, i);
        resultado = numero2;
    }

    printf("El resultado es: %d", resultado);
    return 0;

}