#include <stdio.h>

int main(){
printf("Write 3 number to find smallest\n");
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a<b){
if (a<c){
printf("%d is the smallest number \n",a);
}
else {
printf("%d is the smallest number \n",c);
}
}
else {
if (b<c){
printf("%d is the smallest number \n",b);
}
else {
printf("%d is the smallest number \n",c);
}
}
return 0;
}
