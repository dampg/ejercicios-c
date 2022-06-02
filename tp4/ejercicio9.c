#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  const int tamanio=20;
  int vector[tamanio];
  int i,j,aux,x;
  int encontrado=0,posicion;
  
  //Generacion de vector
  srand (time(NULL));
  for(i = 0; i<tamanio; i++){
    vector[i] = rand() % 100+1;
  }



  //Ordenacion
  for(i=0; i<tamanio-1;i++){
    for(j=i+1; j<tamanio; j++){
      if(vector[i]>vector[j]){
        aux=vector[i];
        vector[i]=vector[j];
        vector[j]=aux;
      }
    }
  }

    
   //Mostar vector original
   for(i=0;i<tamanio;i++){
     printf("%d\n",vector[i]);
   }

   //Entrada
   printf("Ingresa un valor: ");
   scanf("%d",&x);

   //Busqueda
   i=0;
   while((encontrado==0) && (i<tamanio)){
     if(vector[i] == x){
        encontrado=1;
        posicion=i;
     }else{
       i++;
     }
   }

   if(encontrado){

    printf("El valor fue encontrado en la posicion %d\n",posicion);
    //Eliminacion
    for(i=posicion; i<tamanio-1; i++){
      vector[i]=vector[i+1];
    }
    vector[tamanio-1] = 0;

   }else{
    printf("El valor no fue encontrado\n");
    //Insercion
    for(i=0; i<tamanio; i++){
      if(x > vector[i]){
        posicion=i+1;
      }
    }
    if(posicion == tamanio){
      vector[posicion-1] = x;
    }else{
      for(i=tamanio-2; i>=posicion; i--){
      vector[i+1] = vector[i];
      }
      vector[posicion] = x;
    }
   }


  for(i=0; i<tamanio; i++){
    printf("%d\n",vector[i]);
  }

  return 0;
}

