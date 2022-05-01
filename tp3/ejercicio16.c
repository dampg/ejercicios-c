#include <stdio.h>

int main(){
	int numero, i; 
	int suma=0;
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	for(i=1;i<numero;i++){
		if(numero%i==0){
			suma+=i;
		}
	}
	if(numero==suma){
		printf("El numero ingresado SI es perfecto");
	}else{

		printf("El numero ingresado NO perfecto");
	}
	return 0;
}
