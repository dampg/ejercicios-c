#include <stdio.h>

int main(){
	int numero, pares = 0, i=-25;
	long int producto = 1; 
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	while(numero > pares){
		if(i % 2 == 0 && i != 0){
			producto *= i;
			pares++;
		}	
		i++;
	}
	printf("El producto de los %d pares posteriores a -25 es: %ld", pares, producto);
	return 0;
}
