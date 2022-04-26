#include <stdio.h>

int main(){
	char caracter;
	int codigo;
	printf("Ingrese un caracter: ");
	scanf("%c",&caracter);
	codigo = caracter;	
	switch(codigo){
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
			printf("Es una vocal");
	}
	return 0;
}
