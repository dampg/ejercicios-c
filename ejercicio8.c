#include <stdio.h>

int main(){
	int numero, i;
	int producto = 1;
	int pares = 0;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);

	while(numero == 0){
		printf("No puede ingresar 0!\n");
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
	}
	numero = -25 + numero;
	for(i = -25; i < numero; i++){
		if(i == 0 ){
			continue;
		}
		if(i % 2 == 0){
			producto *= i;
			pares++;
		}
	}
	printf("El producto de los %d pares posteriores a -25 es: %d",pares,producto);
	return 0;
}
