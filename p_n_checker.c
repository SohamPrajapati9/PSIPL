#include <stdio.h>

int main(){
printf("Write your number to check if it's positive or negative \n");
int n;
scanf("%d",&n);
if (n>0){
printf("Positive number");
}
else if(n<0){
printf("Negative number");
}
else{
printf("Number is 0");
}
}
