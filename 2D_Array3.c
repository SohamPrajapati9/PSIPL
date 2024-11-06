#include <stdio.h> 
#include <math.h>

int main(){
   int n;
   printf("Write the dimensions of the 2D Array \n");
   scanf("%d",&n);
   int a1[n][n];
   printf("Enter the elements for array\n");
   for(int i=0;i<n;i++){
      printf("Enter the elements for %d row \n",i);
      for(int j=0;j<n;j++){
         scanf("%d",&a1[i][j]);
      }
   }
   int sum=0;
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         sum+= (a1[i][j]*a1[i][j]);
      }
   }
   double norm = sqrt(sum);
   printf("Norm = %f \n",norm);
   return 0;
}
