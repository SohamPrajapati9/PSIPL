#include <stdio.h>

int main(){
printf("Write a number to verify if it's a Palindrome number\n");
int n;
scanf("%d",&n);
int og=n;
int ans=0;
while(n!=0){
int ld = n%10;
ans = ans*10 + ld;
n = n/10;
}
if(ans==og){
printf("%d is a Palindrome number",og);
}
else{
printf("%d is not a Palindrome number",og);
}
return 0;
}
