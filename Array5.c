#include <stdio.h>

void print(int arr[],int n){
   for(int i=0;i<n;i++)
      printf("%d \t",arr[i]);
      
      printf("\n");
}

int main(){
   
   int n;
   printf("Enter number of elements :- \n");
   scanf("%d",&n);
   int a[n];
   printf("Enter %d numbers :- \n",n);
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   
   for(int i=1;i<n-1;i++){
      int hold = a[i];
      for(int j=i;j>=0;j--){
         if(a[j]>hold && j>=0 && a[j]>a[j-1]){
            a[i]=a[j];
         }
         a[j]=hold;
      }
      
    print(a,n);
   }
   printf("The numbers in ascending order are:- \n");
   for(int i=0;i<n;i++){
      printf("%d ",a[i]);
   }
   printf("\n");
   return 0;
}
