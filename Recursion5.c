#include <stdio.h>

int div(int l,int b,int t){
   if(l==0 || b==0){
      return t;
   }
   int i=0;
   for(i=1;i>=0;i*2){
      if(i>l || i>b){
         break;
      }
   }
   l=l-i;
   b=b-i;
   t++;
   div(l,i,t);
   div(i,b,t);
   return t;
}

int main(){
   int l=6,b=5,t=0;
   int tile = div(l,b,t);
   printf("%d \n",tile);
}
