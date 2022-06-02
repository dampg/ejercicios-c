#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  const int tamanio=100;
  int vector[tamanio];
  int i;

  //Generacion del vector
  srand(time(NULL));
  for(i=0;i<100;i++){
    vector[i]=rand()% (1000+1);
  }

  //Determinacion de impares
  printf("Elementos impares que estan en posiciones pares:\n");
  for(i=0;i<100;i+=2){
    if(vector[i]%2!=0){
      printf("Posicion %d: %d\n",i,vector[i]);
    }
  }
  
  //Determinacion de pares
  printf("\nElementos pares que estan en posiciones impares:\n");
  for(i=1;i<100;i+=2){
    if(vector[i]%2==0){
      printf("Posicion %d: %d\n",i,vector[i]);
    }
  }
  return 0;
}

