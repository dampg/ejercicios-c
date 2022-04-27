#include <stdio.h>

int main(){
	int numero, digito;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	while(numero != 0){
		digito = numero % 10;
		printf("%d\t",digito);
		numero = numero / 10;
	}
	return 0;
}
