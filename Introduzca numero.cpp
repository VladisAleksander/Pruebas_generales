#include <stdio.h>

int num1, num2;
int res;

int main()
{
	printf("Buen dia, Usuario. Introduzca el primer numero \n\n");
	scanf("%d", &num1);
	printf("Introduza el segundo numero \n\n");
	scanf("%d", &num2);
	res = num1 - num2;
	
	printf("El resultado es : %d", res);
	
}
