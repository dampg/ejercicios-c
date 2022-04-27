#include <stdio.h>

int main(){
	int numero;
	int opcion;
	int contador = 0;
	int acumulador = 0;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	acumulador += numero;
	contador++;

	printf("Ingrese [1] si desea ingresar otro numero: ");
	scanf("%d",&opcion);
	while(opcion == 1){
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		acumulador += numero;
		contador++;
		printf("Ingrese [1] si desea ingresar otro numero: ");
		scanf("%d",&opcion);
	}

	printf("La cantidad de numeros ingresados es: %d\n", contador);
	printf("La suma de los numeros ingresados es: %d\n", acumulador);
	return 0;
}
