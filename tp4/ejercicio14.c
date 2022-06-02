#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
  float matriz[2][10]; 
  int i,j;
  float valor; 
  
  //Inicializacion del array
  for(j=0;j<10;j++){
    printf("Ingrese un valor para la matriz:");
    scanf("%f",&valor);
    matriz[0][j]=valor;
    matriz[1][j]=pow(valor, 3);
  }


  //Mostrar el array
  for(i=0;i<2;i++){
    for(j=0;j<10;j++){
      printf("%.2f  ",matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}


