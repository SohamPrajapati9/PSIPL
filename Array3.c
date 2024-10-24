#include <stdio.h>

int main(){

   int n;
   printf("Set size of array \n");
   scanf("%d",&n);
   int a[n];
   printf("Enter %d numbers :- \n",n);
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++){
      for(int k=0;k<n-1-i;k++){
         if(a[k]>a[k+1]){
            int temp=a[k+1];
            a[k+1]=a[k];
            a[k]=temp;
            for(int i=0;i<n;i++){
               printf("%d \t",a[i]);
            }
            printf("\n");
         }
      }
   }
   int search;
   int lastt=n-1;
   int firstt=0;
   int middlet;
   int d=0;
   while(lastt!=firstt){
       middlet=(lastt+firstt)/2;
       if(search==a[middlet]){
           printf("The index is %d",middlet);
           d=1;
           break;
       }else if(search>a[middlet]){
           firstt=middlet+1;
       }else if(search<a[middlet]){
           lastt=middlet-1;
       }
   }
   if(d==0){
       printf("The term %d isn't present",search);
   }
   return 0;
}