#include <stdio.h>
int main(){
	int a,i,j;
	printf("Ingresa un numero: ");
	scanf("%d",&a);
	for(i=1; i<a*2;i+=2){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
}
