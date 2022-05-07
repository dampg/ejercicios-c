#include <stdio.h>

int main(){
	int numero,i,j;
	int contador = 0;
	int suma = 0;
	printf("Ingresa un numero: ");
	scanf("%d",&numero);
	for(j=0; j<numero;j++){
		for(i=1; i<=j ;i++){
			if(j%i==0){
    				contador++;
			} 
		}
		if(contador == 2){
			suma += j;
		}
		contador = 0;
	}
	printf("La suma es de los numeros primos menores a %d es %d",numero, suma);
	return 0;
}
