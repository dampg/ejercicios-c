#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int tamanio;
  int sumaFilas=0,sumaColumnas=0,sumaD1=0,sumaD2=0;
  int i,j,distinto=0;
  printf("Ingrese el tamaño de la matriz: ");
  scanf("%d",&tamanio);
  while(tamanio<3 || (tamanio%2)==0){
    printf("\nPor favor ingrese otro valor\n");
    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d",&tamanio);
  }

  int matriz[tamanio][tamanio];

  srand(time(NULL));

  for(i=0;i<tamanio;i++){
    for(j=0;j<tamanio;j++){
      matriz[i][j]=rand()%(9-1+1)+1;
    }
  }

  for(i=0;i<tamanio;i++){
    for(j=0;j<tamanio;j++){
      printf("%4d",matriz[i][j]);
    }
    printf("\n");
  }

  //Verificacion de cuadrado magico
  
  //Diagonales
  for(i=0;i<tamanio;i++){
    sumaD1+=matriz[i][i];
    sumaD2+=matriz[i][(tamanio-1)-i];
  }
  if(sumaD1!=sumaD2){
    distinto=1;
  }

  //Filas y columnas
  i=0;
  while(i<tamanio && !distinto){
    for(j=0;j<tamanio;j++){
      sumaFilas+=matriz[i][j]; 
      sumaColumnas+=matriz[j][i]; 
    }
    if(sumaFilas!=sumaD1){
      distinto=1;
    }
    if(sumaColumnas!=sumaD1){
      distinto=1;
    }
    sumaFilas=0;
    sumaColumnas=0;
    i++;
  }

  if(!distinto){
    printf("La matriz es un cuadrado magico");
  }else{
    printf("La matriz no es un cuadrado magico");
  }
  return 0;
}

