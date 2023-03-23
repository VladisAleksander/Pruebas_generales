#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sentence[100];
    int i, count = 0;
    char ch;

    while (1) {
        system("cls"); // Limpia la consola
        printf("Ingrese una oracion: ");
        fgets(sentence, 100, stdin);

        for (i = 0; sentence[i] != '\0'; i++) {
            ch = sentence[i];

            if (ch == ' ' && sentence[i-1] == '.') {
                count++;
            }
        }

        printf("La oracion tiene %d palabras.\n\n", count+1);
        count = 0;
        printf("Presione Enter para volver a comenzar...");
        getchar(); // Espera a que el usuario presione enter para continuar
    }

    return 0;
}