#include <stdio.h>

int main(){
  int vector[500], i, contador=0, maximo, minimo, promedio, suma=0;
  for(i=0;i<500;i++){
    vector[i]=contador;
    contador+=2;
  }
  for(i=499;i>-1;i--){
    printf("%4d",vector[i]);
  }
  printf("\n");

  maximo=vector[0];
  minimo=vector[0];
  
  for(i=0;i<500;i++){
    //Valor maximo
    if(vector[i]>maximo){
      maximo=vector[i];
    }

    //Valor minimo
    if(vector[i]<minimo){
      minimo=vector[i];
    }
    suma+=vector[i];
  }

  //Promedio
  promedio=suma/500;

  printf("El promedio es: %d\n", promedio);
  printf("El valor maximo es: %d\n", maximo);
  printf("El valor minimo es: %d\n", minimo);
  
  return 0;
}

