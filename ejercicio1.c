#include <stdio.h>

int main (){
	int a,b,c;
	printf("Ingrese el primer numero: ");
	scanf("%d",&a);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&b);
	printf("Ingrese el tercer numero: ");
	scanf("%d",&c);
	while(a == c || a == b || b == c){
		printf("¡Ingreso un numero repetido!\n");
		printf("Ingrese el primer numero: ");
		scanf("%d",&a);
		printf("Ingrese el segundo numero: ");
		scanf("%d",&b);
		printf("Ingrese el tercer numero: ");
		scanf("%d",&c);
	}
	if(a > b && b > c){
		printf("Los numeros se ingresaron en orden decreciente");
	}
	return 0;
}
//si ingreso un float se detiene el programa
//si ingreso un char entra en un bucle infinto
