#include <stdio.h>

int main(){
  float v1[10]={23.4,23.8,23.5,76.3,87.2,54.3,65.3,10.2,43.2,32.9},
        v2[10]={23.5,43.5,98.3,23.4,34.6,23.5,64.3,12.6,99.2,12.5},
        suma,v3[10];
  int i;

  //Suma
  for(i=0;i<10;i++){
    v3[i] = v1[i] + v2[9-i];   
  }
  for(i=0;i<10;i++){
    printf("%.1f\n",v3[i]);
  }
  return 0;
}


