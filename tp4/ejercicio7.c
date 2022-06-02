#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  const int tamanio = 100;
  int vector[tamanio];
  int i,j,aux,numero,posicion=0,repetidos=0;

  //Generacion del vector
  srand (time(NULL));
  while(posicion<tamanio){
    numero = rand() % (100+1);
    if(numero % 4 == 0){
      vector[posicion] = numero;
      posicion++;
    }
  }

  //Ordenacion con el metodo de la burbuja  
  for(i=1; i<tamanio; i++){
    for(j=tamanio-1; j>=i; j--){
      if(vector[j-1] > vector[j]){
        aux=vector[j-1];
        vector[j-1]= vector[j];
        vector[j]=aux;
      }
    }
  }
  
  //Busqueda de valores repetidos
  for(i=0; i<=100; i+=4){
    for(j=0; j<tamanio; j++){
      if(vector[j] == i){
        repetidos++;
      }
    }
    if(repetidos>1){
      printf("El valor %d se repite %d veces \n", i,repetidos);
    }
    repetidos=0;
  }

}

