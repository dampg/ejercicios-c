#include <stdio.h>

int main(){
	int i;
	int acumulador = 0;
	for(i = 6; i < 1141; i++){
		if ( i % 3 == 0 && i % 2 == 0 ){
			acumulador += i;
		}
	}
	printf("%d",acumulador);
	return 0;
}