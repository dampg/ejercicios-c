#include <stdio.h>

int main(){
	int nota,i,j;
	int contador=0,parcial=0;
	for(i=0;i<18;i++){
		printf("Notas del alumno %d: \n",i+1);
		for(j=0;j<5;j++){
			printf("Ingrese la nota del trabajo %d: ",j+1);
			scanf("%d",&nota);
			if(nota>59){
				contador++;
			}
		}
		if(contador>3){
			parcial++;
		}
		contador=0;
	}
	printf("La cantidad de alumnos que pueden rendir el parcial es: %d",parcial);
	return 0;
}
