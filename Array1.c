#include <stdio.h>

int main(){
   
   int n;
   printf("Enter the number of Students \n");
   scanf("%d",&n);
   int marks[n];
   printf("Enter the marks of each student \n");
   for(int i=0;i<n;i++){
      scanf("%d",&marks[i]);
   }
   int high=marks[0],low=marks[0];
   for(int i=0;i<n;i++){
      if(marks[i]>=high){
          high=marks[i];
      }
      else if(marks[i]<=low){
          low=marks[i];
      }
   }
   printf("Highest marks = %d & Lowest marks = %d \n",high,low);
   return 0;
}
