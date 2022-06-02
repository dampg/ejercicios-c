#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  const int tamanio = 20;
  int valor,j,i,aux;
  int vector[tamanio];
  printf("Ingresa un valor: ");
  scanf("%d",&valor);

  //Generacion de vector
  srand (time(NULL));

  for(i = 0; i<tamanio; i++){
    vector[i] = rand() % (119-6+1) + 6;
  }

  //Ordenacion
  for(i=0; i<tamanio-1;i++){
    for(j=i+1; j<tamanio; j++){
      if(vector[i]<vector[j]){
        aux=vector[i];
        vector[i]=vector[j];
        vector[j]=aux;
      }
    }
  }

  //Busqueda
  int mitad, izq=0; 
  int der=tamanio-1;
  int encontrado=0;
  while((izq<=der) && (encontrado==0)){
    mitad= (izq + der) / 2;
    if(vector[mitad]==valor){
      encontrado=1;
    }else{
      if(vector[mitad]>valor){
        izq=mitad+1;
      }else{
        der=mitad-1;
      }
    }
  }
  if(encontrado){
    printf("El valor %d esta en el vector en la posicion %d\n", valor, mitad);
  }else{
    printf("El valor %d no esta en el vector\n", valor);
  }

  for(i=0;i<tamanio;i++){
    printf("%d\n",vector[i]);
  }
  
  return 0;
}

