#include <stdio.h>

int main(){
	int numero, contador, i, j, cifra = 0;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	while(numero < 1 || numero > 9){
		printf("Debes ingresar un numero menor o igual a 9\n");	
		printf("Ingrese un numero");
		scanf("%d",&numero);
	}

	for(i=0;i<numero;i++){
		for(j=i;j>-1;j--){
			printf("%d",j);	
		}
		printf("\n");
	}

	for(i=numero;i>1;i--){
		for(j=i-2;j>-1;j--){
			printf("%d",j);	
		}
		printf("\n");
	}
	return 0;
}
