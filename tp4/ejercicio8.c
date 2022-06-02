#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
  long int vector[10];
  int i;

  //Generacion del vector
  srand (time(NULL));
  for(i = 0; i<10; i+=2){
    vector[i] = rand() % (9+1);
  }
  
  //Valores del vector en posicion par
  for(i = 1; i<10; i+=2){
    vector[i] = pow(vector[i-1],i);
  }

  //Valores del vector en posicion impar
  for(i=0; i<10; i++){
    printf("%ld\n",vector[i]);
  }
  return 0;
}
