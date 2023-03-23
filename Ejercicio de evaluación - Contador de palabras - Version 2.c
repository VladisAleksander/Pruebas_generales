#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char sentence[MAX_LENGTH];
    char clean_buffer;
    int word_count = 0;

    while (1) {
        // Pedir la oración al usuario
        printf("Introduzca una oracion: ");
        fgets(sentence, MAX_LENGTH, stdin);

        // Contar las palabras de la oración
        for (int i = 0; sentence[i] != '\0'; i++) {
            if (sentence[i] == ' ' || sentence[i] == '\n') {
                word_count++;
            }
        }

        // Mostrar el resultado final
        printf("La oracion tiene %d palabras.\n", word_count);

        // Limpiar la consola
        system("pause");
        system("cls");

        // Reiniciar el contador de palabras
        word_count = 0;

        // Limpiar el buffer de entrada
        while ((clean_buffer = getchar()) != '\n' && clean_buffer != EOF);
    }

    return 0;
}