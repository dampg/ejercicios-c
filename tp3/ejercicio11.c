#include <stdio.h>

int main() {
	int primero, segundo, i; 
	int impares = 0;
	printf("Ingrese el primer numero: ");
	scanf("%d",&primero);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&segundo);
	while(primero >= segundo){
		printf("El primer numero debe ser menor que el segundo\n");
		printf("Ingrese el primer numero: ");
		scanf("%d",&primero);
		printf("Ingrese el segundo numero: ");
		scanf("%d",&segundo);
	}
	for(i = primero; i <= segundo ; i++){
		if( (i % 2) != 0){
			impares += i;	
		}
	}
	printf("La suma de todos los impares desde %d a %d es: %d", primero, segundo, impares);
	return 0;
}
