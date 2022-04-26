#include <stdio.h>

int main(){
	int nota;
	printf("Ingrese una nota: ");
	scanf("%d",&nota);
	while(nota > 100 || nota < 1){
		printf("!Debe ingresar una nota entre 0  y 100¡\n");
		printf("Ingrese una nota: ");
		scanf("%d",&nota);
	}
	if( nota < 21 ){
		printf("E\n");
	}else if(nota > 20 && nota < 41){
		printf("D\n");
	}else if(nota > 40 && nota < 61){
		printf("C\n");
	}else if(nota > 60 && nota < 81){
		printf("B\n");
	}else{
		printf("A\n");
	}
	return 0;
}
