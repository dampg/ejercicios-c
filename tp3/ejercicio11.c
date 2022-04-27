#include <stdio.h>

int main() {
	int numero1, numero2, i, impares = 0;
	printf("Ingrese el primer numero: ");
	scanf("%d",&numero1);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&numero2);
	while(numero1 > numero2){
		printf("El primer numero debe ser menor que el segundo\n");
		printf("Ingrese el primer numero: ");
		scanf("%d",&numero1);
		printf("Ingrese el segundo numero: ");
		scanf("%d",&numero2);
	}
	i = numero1;
	for(i; i < numero2 ; i++){
		if( (i % 2) != 0){
			impares += i;	
		}
	}
	printf("La suma de todos los impares desde %d a %d es: %d", numero1, numero2, impares );
	return 0;
}
