#include <stdio.h>

int main(){
	int numero, i, j;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	for(i=0; i<numero; i++){
		for(j=i;j>-1;j--){
			printf("%d",j);
		}	
		printf("\n");
	}
	for(i=numero; i>1; i--){
		for(j=i-2;j>-1;j--){
			printf("%d",j);
		}	
		printf("\n");
	}
	return 0;
}
