#include <stdio.h>

int main(){
	int a, b, digito, copia; 
	int espejo=0;   
	printf("Ingresa el primer numero: ");
	scanf("%d",&a);
	printf("Ingresa el segundo numero: ");
	scanf("%d",&b);
	copia = a;
   	while( a != 0 ){
      		digito = a % 10;
      		espejo = espejo * 10+ digito;
      		a /= 10;
   	}
	if ( espejo == b ){
		printf("%d SI es espejo de %d", copia, b);
	}else{
		printf("%d NO es espejo de %d", copia, b);
	}
	return 0;
}
