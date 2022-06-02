#include <stdio.h>

int main(){
  int vectorA[15], vectorB[20],vectorC[26] ,i;

  //Vector A
  for(i=0;i<15;i++){
    vectorA[i] = i;
  }

  //Vector B
  for(i=0;i<20;i++){
    vectorB[i] = 19-i;
  }
  
  //Vector C
  for(i='A';i<'Z';i++){
    switch(i){
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        vectorC[i]=0;
        break;
      default:
        vectorC[i]=1;
    }
  }

  printf("Vector A:\n");
  for(i=0;i<15;i++){
    printf("%d ",vectorA[i]);
  }

  printf("\nVector B:\n");
  for(i=0;i<20;i++){
    printf("%d ",vectorB[i]);
  }

  printf("\nVector C:\n");
  for(i='A';i<'Z';i++){
    printf("%d ",vectorC[i]);
  }
  return 0;
}


