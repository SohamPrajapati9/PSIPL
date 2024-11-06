#include <stdio.h>

int po(int n,int x){
   if(x==0){
      return 1;
   }
   
   return n * po(n,x-1);
}

int main(){
   int n,x;
   printf("Enter the number and it's power n^x \n");
   scanf("%d%d",&n,&x);
   int ans = po(n,x);
   printf("%d ^ %d = %d \n",n,x,ans);
   return 0;
}
