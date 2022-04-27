#include <stdio.h>

int main(){
	int natural, i, suma = 0;
	printf("Ingrese un numero: ");
	scanf("%d",&natural);
	for(i = 0; i < natural+1; i++){
		suma = suma + i * i;
	}
	printf("La suma los cuadrados es: %d", suma);
	return 0;
}
