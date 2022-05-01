#include <stdio.h>
int main(){
	int a,i,j;
	int c = 97;
	printf("ingrese un numero: ");
	scanf("%d",&a);
	for(i=1;i<a*2;i+=2){
		for(j=a*2;j>i+2;j-=2){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("%c",c);
		}
		printf("\n");
		c++;
	}
}
