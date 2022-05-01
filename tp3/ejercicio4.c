#include <stdio.h>

int main(){
	int hora;
	printf("Ingrese un numero: ");
	scanf("%d", &hora);
	if(hora > 5 && hora < 13){
		printf("Buenos dias");
	}else if(hora > 12 && hora < 19){
		printf("Buenas tardes");
	}else{
		printf("Buenas noches");
	}
	return 0;
}
