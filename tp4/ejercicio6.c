#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  const int tamanio=50;
  int vector[tamanio];
  int aux,i,j,bandera=0;

  //Generacion del vector
  srand (time(NULL));
  for(i=0; i<tamanio; i++){
    vector[i]=rand () % (100-(-100)+1) + (-100);
  }

  //Ordenacion
  for(i=0; i<tamanio-1; i++){
    for(j=i+1; j<tamanio; j++){
      if(vector[i]>vector[j]){
        aux=vector[i]; 
        vector[i]=vector[j];
        vector[j]=aux;
      }
    }
  }

  //Coincidencias valor-subindice
  for(i=0;i<tamanio;i++){
    if(vector[i]==i){
      printf("El valor %d coincide con su subindice %d\n", vector[i], i);
      bandera=1;
    }
  }
  if(!bandera){
    printf("No se encontraron valores que coincidan con su subindice");
  }

  return 0;
}
