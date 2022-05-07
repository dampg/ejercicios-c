#include <stdio.h>

int main(){
	int numero, opcion;
	int contador = 0;
	int suma = 0;
  do{
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    suma += numero;
    contador++;
    printf("\n*Ingrese [1] si desea agregar otro numero\n");
    printf("*Ingrese [0] para salir\n");
    printf("Ingrese la opcion elegida: ");
    scanf("%d",&opcion);
  }while(opcion == 1);

  printf("La cantidad de numeros ingresados es: %d\n", contador);
  printf("La suma de los numeros ingresados es: %d\n", suma);
  return 0;
}
