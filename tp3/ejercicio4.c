#include <stdio.h>

int main(){
	int hora;
	printf("Ingrese un numero: ");
	scanf("%d", &hora);
	while(hora < 0 || hora > 23){
		printf("Ingrese un numero entre 0 y 23\n");
		printf("Ingrese un numero");
		scanf("%d", &hora);
	}
	if(hora > 5 && hora < 13){
		printf("Buenos dias");
	}else if(hora > 12 && hora < 21){
		printf("Buenas tardes");
	}else{
		printf("Buenas noches");
	}
	return 0;
}
