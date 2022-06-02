#include <stdio.h>

int main(){
  int i;
  int vector[20], suma=0;
  for(i=0;i<20;i++){
    printf("Ingrese un valor: ");
    scanf("%f",&vector[i]);
  }
  for(i=0;i<20;i++){
    printf("%.2f\n",vector[i]);
  }

  //Multiplos de 3 y 5
  for(i=0;i<20;i++){
    if(vector[i]%3==0 || vector[i]%5==0){
      suma+=vector[i];
    }
  }
  printf("La suma es: %.2f", suma);
 
  return 0;
}

