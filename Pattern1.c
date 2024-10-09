#include <stdio.h>

int main(){

  printf(" Enter a number for size \n");
  int num;
  scanf("%d",&num);
  
  for(int i=1;i<=num;i++){
    for(int j=1;j<=i;j++){
      printf("%d ",j);
    }
    printf(" \n");
  }
  return 0;
}
