#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int matriz[4][4];
  int i,j;
  int distinto=0;

  srand (time(NULL));
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      matriz[i][j] = rand() % (20-10+1) + 10;
    }
  }
  
  //Mostrar matriz
  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      printf("%4d",matriz[i][j]);
    }
    printf("\n");
  }
  
  //Verificacion matriz simetrica
  i=0;
  while(!distinto && i<4){
    for(j=0;j<4;j++){
      if( matriz[i][j] != matriz[j][i]){
        distinto=1; 
      }
    }
    i++;
  }
  if(!distinto){
    printf("La matriz es simetrica");
  }else{
    printf("La matriz no es simetrica");
  }

  return 0;
}


