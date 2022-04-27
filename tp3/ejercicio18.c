#include <stdio.h>

int main(){
	int numero, contador, i, j, k;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	while(numero < 1 || numero > 9){
		printf("Debes ingresar un numero menor o igual a 9\n");	
		printf("Ingrese un numero");
		scanf("%d",&numero);
	}

	for(i = 1; i < numero+1; i++){

		for(j = 1; j < i; j++){
			printf("%d",j);
		}
		for(k = j; k > 0; k--){
			printf("%d",k);
		}
		
		printf("\n");
	}

	return 0;
}
