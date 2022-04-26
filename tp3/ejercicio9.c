#include <stdio.h>

int main(){
	int numero, promedio;
	int positivos = 0;
	int cantidad = 0;
	int negativos = 0;
	int menor = 2147483647;
	int mayor = -2147483648;
	printf("Ingresa un numero: ");
	scanf("%d",&numero);
	while(numero != 0){
		if(numero > 0){
			positivos += numero;
			cantidad ++;
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
	if(cantidad > 0){
		promedio = positivos / cantidad;
	}
	printf("%d\n",positivos);
	printf("El promedio de los numeros postivos es: %d\n", promedio);
	printf("La suma de los negativos es: %d\n", negativos);
	printf("El mayor de los negativos es: %d\n", mayor);
	printf("El menor de los impares es: %d\n", menor);
	
	return 0;
}
