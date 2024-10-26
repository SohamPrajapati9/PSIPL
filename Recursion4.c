#include <stdio.h>

void sub(int n,int og){
   printf("%d ,",n);
   int ans=n-5;
   if(n<=0){
      return;
   }
   sub(ans,og);
   printf("%d ,",n);
   if(ans==og){
     printf("\n");
     return;
   }
}

int main(){
   int n;
   printf("Enter a number \n");
   scanf("%d",&n);
   int og=n;
   sub(n,og);
   return 0;
}
