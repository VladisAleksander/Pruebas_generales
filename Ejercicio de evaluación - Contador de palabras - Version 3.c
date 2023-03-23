#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sentence[100];
    char *word;
    int words = 0;

    while (1) {
        printf("Ingresa una oracion: ");
        fgets(sentence, 100, stdin); // Lee la oración ingresada por el usuario

        word = strtok(sentence, "."); // Divide la oración en palabras separadas por un punto

        while (word != NULL) {
            if (strlen(word) > 1) { // Ignora las palabras vacías
                words++; // Incrementa el contador de palabras
            }
            word = strtok(NULL, "."); // Continúa dividiendo la oración en palabras
        }

        printf("La oracion ingresada tiene %d palabras.\n", words);
        system("pause"); // Espera a que el usuario presione una tecla para continuar
        system("cls"); // Limpia la consola para comenzar de nuevo
        words = 0; // Reinicia el contador de palabras
    }

    return 0;
}