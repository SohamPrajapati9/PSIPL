#include <stdio.h>



int main(){
   
   int n;
   printf("Enter number of inputs \n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the inputs \n");
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++){
      for(int k=0;k<n;k++){
         if(a[k]>a[k+1]){
            int temp=a[k+1];
            a[k+1]=a[k];
            a[k]=temp;
         }
      }
   }
   int search;
   printf("Enter the number you want to search \n");
   scanf("%d",&search);
   int mid = n/2;
   if(a[mid]==search){
      printf("The number %d is present at index %d",search,mid); 
   }
   else if(a[mid]>search){
      for(int i=0;i<=mid;i++){
         if(a[i]==search){
            printf("The number %d is present at index %d",search,i);         
         } 
      }
   }
   else if(a[mid]<search){
      for(int i=mid;i<=n;i++){
         if(a[i]==search){
            printf("The number %d is present at index %d",search,i);         
         } 
      }
   }
   else{
      printf("The number is not present in the list"); 
   }
   return 0; 
}
