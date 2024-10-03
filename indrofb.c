include <stdio.h>

int main()
{
 int a=10,b;
 b=a++;
 printf("%d \n", b);
 b=++a;
 printf("%d \n", b);
 b=a--;
 printf("%d \n", b);
 b=--a;
 printf("%d \n", b);
 return 0;
 }
