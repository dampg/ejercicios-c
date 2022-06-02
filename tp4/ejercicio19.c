#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int const tamanio = 4;
  int matriz[tamanio][tamanio];
  int i,j,producto=1,suma=0;
  int menor=10,mayor=-1;
  int menorFila,menorColumna;
  int mayorFila,mayorColumna;
  int valor,valorFila,valorColumna,contador=0;

  printf("Ingrese un valor: ");
  scanf("%d",&valor);
  
  srand (time(NULL));
  for(i=0;i<tamanio;i++){
    for(j=0;j<tamanio;j++){
      matriz[i][j] = rand() % (9-1+1) + 1;
    }
  }

  for(i=0;i<tamanio;i++){
    for(j=0;j<tamanio;j++){
      printf("%4d",matriz[i][j]);
    }
    printf("\n");
  }

  //Diagonal principal
  for(i=0;i<tamanio;i++){
    producto*=matriz[i][i];
  }

  //Diagonal secundaria
  for(i=0;i<tamanio;i++){
    if((matriz[i][(tamanio-1)-i]%2)==0){
      suma+=matriz[i][(tamanio-1)-i];
    }
  }

  //Menor elemento
  for(i=0;i<tamanio;i++){
    for(j=0;j<tamanio;j++){
      if(menor>matriz[i][j]){
        menor=matriz[i][j];
        menorFila=i;
        menorColumna=j;
      }
      if(mayor<=matriz[i][j]){
        mayor=matriz[i][j];
        mayorFila=i;
        mayorColumna=j;
      }
    }
  }

  printf("Producto de los elementos de la diagonal principal: %d\n",producto);
  printf("Suma de los elementos pares de la diagonal secundaria: %d\n",suma);
  printf("Menor elemento de la matriz: %d | Posicion: fila %d, columna %d\n",menor,menorFila,menorColumna);
  printf("Mayor elemento de la matriz: %d | Posicion: fila %d, columna %d\n",mayor,mayorFila,mayorColumna);

 //Busqueda
  for(i=0;i<tamanio;i++){
    for(j=0;j<tamanio;j++){
     if(matriz[i][j] == valor){
       valorFila=i;
       valorColumna=j;
       printf("%d se encuentra en la posicion: fila %d, columna %d\n",valor,valorFila,valorColumna);
       contador++;
     }
    }
  }
  printf("El valor ingresado se encuentra %d veces dentro de la matriz", contador);
  return 0;
}


