#include <stdio.h>

int div(int n){
   if(n==0){
      return 0;
   }
   int ld=n%10;
   int sum = ld + div(n/10);
   return sum;
}

int main(){
   int n;
   printf("Enter a number \n");
   scanf("%d",&n);
   int ans=div(n);
   printf("Sum of digits of %d = %d \n",n,ans);
   return 0;
}
