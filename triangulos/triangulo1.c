#include <stdio.h>

int main() {
	int a,i,j;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=0;j<a-i;j++){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		for(j=1;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
}


