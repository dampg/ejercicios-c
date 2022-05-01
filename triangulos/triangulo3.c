#include <stdio.h>
int main(){
	int a,i,j;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	for(i=2; i<a;i++){
		for(j=3;j<a;j++){
			printf(" ");
		}
		for(j=0;j<i-1;j++){
			printf("%d",(a-2)-j);
		}
		printf("\n");
	}
	for(i=2; i<a;i++){
		for(j=2;j<i;j++){
			printf(" ");
		}
		for(j=i-1;j<a-1;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
