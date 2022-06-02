#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int matriz[3][3];
  int i,j;
  int menor = 100; //Valor maximo actual
  int mayor = 0;
  int columna,fila,suma=0,producto=1;

  //Generacion de matriz
  srand (time(NULL));
  for(i=0; i<3; i++){
    for(j=0;j<3;j++){
      matriz[i][j]=rand() % (100+1);
    }
  }

  //Mostrar matriz
  for(i=0; i<3; i++){
    for(j=0;j<3;j++){
      printf("%4d",matriz[i][j]);
    }
    printf("\n");
  }

  //Menor elementos de cada fila
   for(i=0; i<3; i++){
    for(j=0;j<3;j++){
      if(menor>matriz[i][j]){
        menor=matriz[i][j];
        columna=j;
      }
    }
      printf("El menor elemento de la fila %d es %d y esta en la posicion %d\n", i,menor,columna);
      menor=100;
  }

  //Menor elemento de la matriz
   for(i=0; i<3; i++){
    for(j=0;j<3;j++){
      if(menor>matriz[i][j]){
        menor=matriz[i][j];
        columna=j;
        fila=i;
      }
    }
  }
  printf("El menor elemento de la matriz es %d y esta en la fila %d, columna %d\n",menor,fila, columna);

  //Suma de cada fila
  for(i=0; i<3; i++){
    for(j=0;j<3;j++){
      suma+=matriz[i][j];
    }
    printf("La suma de los elementos de la fila %d es: %d\n", i, suma);
    suma=0;
  }


  //Mayor elemento de cada columna
  for(i=0; i<3; i++){
    for(j=0;j<3;j++){
      if(mayor<matriz[j][i]){
        mayor=matriz[j][i];
        fila=j;
      }
    }
    printf("El mayor elemento de la columna %d es %d y esta en la posicion %d\n", i,mayor,fila);
    mayor=0;
  }

  //Mayor elemento de la matriz
  for(i=0; i<3; i++){
    for(j=0;j<3;j++){
      if(mayor<matriz[j][i]){
        mayor=matriz[j][i];
        fila=j;
        columna=i;
      }
    }
  }
  printf("El mayor elemento de la matriz es %d y esta en la columna %d, fila %d\n", mayor,columna, fila);

  //Productor de los elementos de cada columna
  for(i=0; i<3; i++){
    for(j=0;j<3;j++){
     producto*=matriz[j][i]; 
    }
    printf("El producto de los elementos de la columna %d es %d\n", j, producto);
    producto=1;
  }

  return 0;
}

//Este ejercicio es con reales pero lo hare con enteros
//Eliminar el codigo que muestra la matriz
