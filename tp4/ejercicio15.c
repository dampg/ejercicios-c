#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int matriz[2][8];
  int i,j,numero;
  int divisores=2;

  //Generacion de la matriz
  srand (time(NULL));
  for(i=0;i<8;i++){
    numero=rand() % (100-2+1) + 2;
    matriz[0][i]=numero;
    for(j=2;j<numero/2;j++){
      if(numero%j==0){
        divisores++;
      }
    }
    matriz[1][i]=divisores;
    divisores=2;
  }

  //Mostrar matriz
  for(i=0;i<2;i++){
    for(j=0;j<8;j++){
      printf("%4d",matriz[i][j]);
    }
    printf("\n");
  }


  return 0;
}

