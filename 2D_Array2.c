#include <stdio.h> 

int main(){
   int n;
   printf("Write the dimensions of the 2D Array \n");
   scanf("%d",&n);
   int a1[n][n];
   printf("Enter the elements for first array\n");
   for(int i=0;i<n;i++){
      printf("Enter the elements for %d row \n",i);
      for(int j=0;j<n;j++){
         scanf("%d",&a1[i][j]);
      }
   }
   int sum=0;
   for(int i=0;i<n;i++){
      sum+=a1[i][i];
   }
   printf("Trace = %d \n",sum);
   return 0;
}
