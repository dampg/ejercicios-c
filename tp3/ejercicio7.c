#include <stdio.h>

int main(){
	int i, suma = 0;
	for(i = 6; i < 1141; i++){
		if ( i % 3 == 0 && i % 2 == 0 ){
			suma += i;
		}
	}
	printf("La suma es: %d", suma);
	return 0;
}
