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
      printf(" \n");
   }
   int a2[n][n];
   printf("Enter the elements for second array\n");
   for(int i=0;i<n;i++){
      printf("Enter the elements for %d row \n",i);
      for(int j=0;j<n;j++){
         scanf("%d",&a2[i][j]);
      }
      printf(" \n");
   }
   int a3[n][n];
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         int sum=0;
         for(int l=0;l<n;l++){
            sum += (a1[i][l]*a2[l][j]);
         }
         a3[i][j]=sum;
      }
   }
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         printf("%d \t",a3[i][j]);
      }
      printf(" \n");
   }
   return 0;
}
