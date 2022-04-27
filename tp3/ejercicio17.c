#include <stdio.h>

int main(){
	int numero,suma=0,contador=1,digito,i,copia;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	while(numero < 0){
		printf("Debes ingresar un entero positivo!!\n");
		printf("Ingrese un numero");
		scanf("%d",&numero);
	}
	while(numero!=0){
		digito=numero%10;
		copia=digito;
		for(i=1;i<contador;i++){
			digito=copia*digito;
		}
		suma+=digito;
		contador++;
		numero/=10;
	}
	printf("La suma de los digitos con su respectiva potencia es: %d\n",suma);
	return 0;
}
