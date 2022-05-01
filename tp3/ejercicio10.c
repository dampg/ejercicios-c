#include <stdio.h>

int main(){
	int numero, digito, espejo = 0;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	while(numero != 0){
		digito = numero % 10;
		espejo = espejo * 10 + digito;
		numero = numero / 10;
	}
	while(espejo != 0){
		digito = espejo % 10;
		printf("%d\t",digito);
		espejo = espejo / 10;
	}
	return 0;
}
