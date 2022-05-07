#include <stdio.h>

int main(){
	int numero, promedio; 
	int sumaPositivos = 0;
	int positivos = 0;
	int negativos = 0; 
	int menor = 32767;
	int mayor = -32768;
	printf("Ingresa un numero: ");
	scanf("%d",&numero);
	while(numero != 0){
		if(numero > 0){
			sumaPositivos += numero;
			positivos ++;
		}else{
			negativos += numero;
			if(numero > mayor){
				mayor = numero;
			}
		}
		if(!(numero % 2 == 0)){
			if(numero < menor){
				menor = numero;
			}
		}
		printf("Ingresa un numero: ");
		scanf("%d",&numero);
	}
	if(positivos > 0){
		promedio = sumaPositivos / positivos;
		printf("El promedio de los numeros postivos es: %d\n", promedio);
	}else{
		printf("No se ingreso positivos\n");
	}
	if(negativos != 0){
		printf("El mayor de los negativos es: %d\n", mayor);
	}else{
		printf("No se ingreso negativos\n");
	}
	if(menor != 32767){
		printf("El menor de los impares es: %d\n", menor);
	}else{
		printf("No se ingreso impares\n");
	}
	printf("La suma de los negativos es: %d\n", negativos);
	return 0;
}
