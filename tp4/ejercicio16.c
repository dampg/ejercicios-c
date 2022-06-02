#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int matriz[3][4];
  int transpuesta[4][3];
  int i,j;

  //Generar matriz
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      matriz[i][j]=rand() % (20-5+1) + 5;
    }
  }
  
  //Mostrar matriz
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      printf("%4d",matriz[i][j]);
    }
    printf("\n");
  }

  //Matriz transpuesta
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      transpuesta[i][j]=matriz[j][i];
    }
  }

  //Mostrar transpuesta 
  printf("\n");
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      printf("%4d",transpuesta[i][j]);
    }
    printf("\n");
  }

  return 0;
}

