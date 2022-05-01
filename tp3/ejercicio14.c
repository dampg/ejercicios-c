#include <stdio.h>

int main(){
	long int decimal, contador = 1, binario = 0;
	printf("Ingrese un numero: ");
	scanf("%ld",&decimal);	

	while(decimal != 0){
		binario = binario + (decimal % 2) * contador;
		decimal /= 2;
		contador *= 10;
	}

	printf("El binario del numero ingresado es: %ld",binario);
	return 0;
}
