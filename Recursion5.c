#include <stdio.h>

int div(int l,int b){
   if(l==0 || b==0){
      return 0;
   }
   int i=0;
   for(i=1;i>=0;i=i*2){
      if(i > l || i> b){
         break;
      }
   }
   i = i / 2;
   
   
   return 1 + div(l-i,b) + div(i,b-i);
}

int main(){
   int l,b;
   printf("Enter the dimention of the Quadrilateral (l,b) \n");
   scanf("%d%d",&l,&b);
   int tile = div(l,b);
   printf("We can fit %d tiles \n",tile);
   return 0;
}
