#include <stdio.h>

int main(){
	int numero1, numero2, digito, espejo=0, copia;   
	printf("Ingresa el primer numero: ");
	scanf("%d",&numero1);
	printf("Ingresa el segundo numero: ");
	scanf("%d",&numero2);
	copia = numero1;
   	while( numero1 != 0 ){
      		digito = numero1 % 10;
      		espejo = espejo * 10+ digito;
      		numero1 = numero1 / 10;
   	}
	if ( espejo == numero2 ){
		printf("%d SI espejo de %d", copia, numero2);
	}else{
		printf("%d NO espejo de %d", copia, numero2);
	}
   
	return 0;
}
