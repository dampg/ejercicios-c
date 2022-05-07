#include <stdio.h>

int main(){
	int numero,i, j;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	for(i=0; i<numero; i++){
		for(j=1;j<i+2;j++){
			printf("%d",j);
		}
		for(j=i;j>0;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
