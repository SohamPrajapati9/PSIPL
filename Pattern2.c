#include <stdio.h>

int main(){

  printf(" Write a number for size \n ");
  int num;
  scanf("%d",&num);
  
  for(int i=num;i>0;i--){
    for(int j=i;j>0;j--){
      printf("%d ",j);
    }
    printf(" \n");
  }
  return 0;
}
