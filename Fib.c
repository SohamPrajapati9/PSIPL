#include <stdio.h>

int main(){
int num;
scanf("%d",&num);
    
int t1=0;
int t2=1;
int nxt;
    
for(int i=1;i<=num;i++){
printf("%d \n",t1);
nxt= t1 + t2;
t1=t2;
t2=nxt;
}

return 0;
}
