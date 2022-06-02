#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  int size=9,i,j,vector[100],aux=-1,repetidos=0, mayor=0;

  //Generacion del vector
  srand(time(NULL));
  for(i=0;i<100;i++){
    vector[i]=rand()%size+1;
  }

  printf("Vector generado:\n");
  for(i=0;i<100;i++){
    printf("%d ",vector[i]);
  }

  printf("\n");
  //Busqueda de repetidos
  for(i=1;i<size+1;i++){
    for(j=0;j<100;j++){
      if(i==vector[j]){
        aux++;
      }
    }
    if(aux>0){
      //Determinar el mayor
      if(aux>mayor){
        mayor=aux;
      }
      //printf("%d se repite %d veces\n",i,aux);
      repetidos+=aux;
    }
    aux=-1;
  }

  printf("\nLa cantidad de elementos repetidos que posee el vector es: %d\n",repetidos);

  //Determinacion de mayor
  printf("\nLos elementos que mas se repiten son:\n");
  for(i=0;i<size+1;i++){
    for(j=0;j<100;j++){
      if(i==vector[j]){
        aux++;
      }
    }
    if(aux==mayor){
      printf("El numero %d repitiendose %d veces\n",i,mayor);
    }
    aux=-1;
  }

  return 0;
}

