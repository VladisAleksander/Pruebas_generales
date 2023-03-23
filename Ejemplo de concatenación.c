#include <stdio.h>

int contador = 1;

int main(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("| %d | ", contador);
            contador++;
        }
        printf("\n");
    }
}