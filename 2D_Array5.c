#include <stdio.h>

int main(){
   int n,m;
   printf("Write the dimensions of the 2D Array (n,m)\n");
   scanf("%d%d",&n,&m);
   int a[n][m];
   int ans[m][n];
   printf("Enter the elements for array\n");
   for(int i=0;i<n;i++){
      printf("Enter the elements for %d row \n",i);
      for(int j=0;j<m;j++){
         scanf("%d",&a[i][j]);
      }
   }
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         ans[j][i]=a[i][j];
      }
   }
   printf("\n");
   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
         printf("%d ",ans[i][j]);
      }
      printf("\n");
   }
   return 0;
}
