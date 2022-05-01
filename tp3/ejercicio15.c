#include <stdio.h>

int main(){
	int natural, i; 
	int suma = 0;
	printf("Ingrese un numero: ");
	scanf("%d",&natural);
	for(i = 1; i <= natural; i++){
		suma = suma + i * i;
	}
	printf("La suma los cuadrados es: %d", suma);
	return 0;
}
