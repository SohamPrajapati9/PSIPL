#include <stdio.h>

void print_arr(int arr[],int n){
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
   
   for(int i=0;i<n-1;i++){
      int min_idx = i;
      for(int k=i+1;k<n;k++)
         if(a[min_idx]>a[k])
            min_idx=k;

      
	int temp=a[i];
	a[i]=a[min_idx];
	a[min_idx]=temp;
      
    print_arr(a,n);
   }
   printf("The numbers in ascending order are:- \n");
   for(int i=0;i<n;i++){
      printf("%d ",a[i]);
   }
   printf("\n");
   return 0;
}
