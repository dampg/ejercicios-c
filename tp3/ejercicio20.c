#include <stdio.h>

int main(){
	int nota,derecho,i,j,contador=0,parcial=0;
	for(i=0;i<4;i++){

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
//Falta validar la nota de modo que el usuario no pueda ingresar una nota inferior a 1 o superior a 100
