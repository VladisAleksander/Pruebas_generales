#include <stdio.h>
#include <string.h>

int main(){

	char nombre[20];
	int edad [4];
	
	printf("----Bienvenido----\n");
	printf("Por favor, ingrese su nombre:\n");
	scanf("%s", nombre);
	printf("Por favor, ingrese su edad:\n");
	scanf("%d", &edad);

	if(edad <= 0){
		printf("Edad invalida. Por favor ingrese una edad valida.\n");
	}else if(edad >= 1 && edad <= 15){
		printf("Bienvenido, %s.\nPor favor, pase con el Dr. Gabriel al Consultorio 1 de Pediatria.", nombre);
	}else if(edad >= 16 && edad <= 37){
		printf("Bienvenido, %s.\nPor favor, pase con el Dr. Lenin al Consultorio 14 de Medicina General.", nombre);
	}else if(edad >= 38 && edad <= 59){
		printf("Bienvenido, %s.\nPor favor, pase con el Dr. Oscar al Consultorio 20 de Proctologia.", nombre);
	}else if(edad >= 60 && edad <= 119){
		printf("Bienvenido, %s.\nPor favor, pase con el Dr. Guillermo al Consultorio 26 de Geriatria.", nombre);
	}else if(edad >= 120){
		printf("Bienvenido, %s.\nPor favor, si sigue vivo pongase en contacto con los Records Guiness.\nEn caso contrario, por favor dirigase a la morgue.", nombre);
	}
	
	return 0;

}