#include <stdio.h>

int main(){
	char caracter;
	printf("Ingrese un caracter: ");
	scanf("%c",&caracter);
	switch(caracter){
		case 65: 
		case 97: 
		case 69: 
		case 101: 
		case 73: 
		case 105: 
		case 79: 
		case 111: 
		case 85: 
		case 117:
			printf("%c es una vocal",caracter);
			break;
		default:
			printf("%c no es una vocal",caracter);
	}
	return 0;
}
