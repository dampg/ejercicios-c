#include <stdio.h>
int main(){
	int a,i,j;
	printf("Ingresa un numero: ");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		for(j=3;j<a;j++){
			printf(" ");
		}
		for(j=1;j<i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=2;i<a;i++){
		for(j=2;j<i;j++){
			printf(" ");
		}
		for(j=a-i;j>0;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
