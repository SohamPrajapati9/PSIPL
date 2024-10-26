#include <stdio.h>
#include <math.h>

int div(int l,int b,int t){
    if(l==0 || b==0){
        return (t);
    }
    int i=0;
    while(l>pow(2,i) && b>pow(2,i)){
        i++;
    }
    l-=(pow(2,i));
    b-=(pow(2,i));
    t+=div(l,i,t);
    t+=div(i,b,t);
    t++;
    return (t);
}

int main(){
   int l=6,b=5,t=0;
   int tile = div(l,b,t);
   printf("%d \n",tile);
}
