#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int matriz[8][8];
  int i,j;

  //Generar matriz
  srand (time(NULL));
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      matriz[i][j]=rand() % (50-10+1) + 10;
    }
  }

  //Mostrar matriz
  printf("Matriz:\n");
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      printf("%4d",matriz[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  //Recorrido 1
  printf("Recorrido 1:\n");
  for(i=0;i<4;i++){

    for(j=7;j>i;j--){
      printf("%4d",matriz[i][j]);
    }
    for(j=i;j<7-i;j++){
      printf("%4d",matriz[j][i]);
    }
    for(j=i;j<8;j++){
      printf("%4d",matriz[7-i][j]);
    }
    printf("\n");
  }

  printf("Recorrido 2:\n");
  //Recorrido 2
  for(i=0;i<8;i++){
    for(j=7;j>i;j--){
      printf("%4d",matriz[i][j]);
    }
    for(j=i;j<8;j++){
      printf("%4d",matriz[j][i]);
    }
    printf("\n");
  }

  return 0;
}

//Estilizalo un poco cabron
