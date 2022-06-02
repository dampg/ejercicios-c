#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int vector[7]={2,4,3,3,3,4,2};
  int distinto=0, i=0;

  //Determinacion de capicua
  while((i<(7/2)) && (distinto==0)){
    if(vector[i] != vector[(7-1)-i]){
      distinto=1;
    }
    i++;
  }
  if(!distinto){
    printf("El vector es capicua");
  }else{
    printf("El vector no es capicua");
  }
  return 0;
}

