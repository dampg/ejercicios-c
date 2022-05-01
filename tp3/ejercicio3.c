#include <stdio.h>

int main(){
	int nota;
	printf("Ingrese una nota: ");
	scanf("%d",&nota);
	if( nota < 21 ){
		printf("E");
	}else if(nota > 20 && nota < 41){
		printf("D");
	}else if(nota > 40 && nota < 61){
		printf("C");
	}else if(nota > 60 && nota < 81){
		printf("B");
	}else{
		printf("A");
	}
	return 0;
}

