#include <stdio.h>

int fact(int n){
   if(n==1 || n==0){
      return 1;
   }
   int fac=n*fact(n-1);
   return fac;
}

int main(){
   int n;
   printf("Enter a number \n");
   scanf("%d",&n);
   int ans=fact(n);
   printf("%d Factorial = %d \n",n,ans);
   return 0;
}
