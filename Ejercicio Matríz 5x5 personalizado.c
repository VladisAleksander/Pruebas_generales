#include <stdio.h>

int main() {
    int matriz[5][5];
    int num1, num2;
    int i, j;

    printf ("Para crear su matriz\n");
    printf ("Ingrese el primer numero:\n");
    scanf ("%d", &num1);
    printf ("Ingrese el segundo numero:\n");
    scanf ("%d", &num2);

    printf ("\nDisfrute de su matriz personalizada:\n\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if ((i + j) % 2 == 0) {
                matriz[i][j] = num1;
            } else {
                matriz[i][j] = num2;
            }
            printf ("| %d |", matriz[i][j]);
        }
        printf ("\n");
    }
    return 0;
}