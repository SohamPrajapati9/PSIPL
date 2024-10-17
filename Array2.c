#include <stdio.h>

int main(){
   
   int a[5];
   printf("Enter 5 numbers :- \n");
   for(int i=0;i<5;i++){
      scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++){
      for(int k=0;k<5-1-i;k++){
         if(a[k]>a[k+1]){
            int temp=a[k+1];
            a[k+1]=a[k];
            a[k]=temp;
         }
      }
   }
   printf("The numbers in ascending order are:- \n");
   for(int i=0;i<5;i++){
      printf("%d ",a[i]);
   }
   return 0;
}
