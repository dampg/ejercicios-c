#include <stdio.h>

int main(){
	int opcion;
	printf("OPERACIONES\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	printf("Ingrese su opcion (De 1 a 4 | 0 para salir) ");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:
			printf("Suma");
			break;
		case 2:
			printf("Resta");
			break;
		case 3:
			printf("Multiplicacion");
			break;
		case 4:
			printf("Division");
			break;
		case 0:
			return 0;
	}
	return 0;
}
