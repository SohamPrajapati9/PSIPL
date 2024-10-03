include <stdio.h>

int main()
{
 int a=10,b;
 b=a++;
 printf("The value of b is %d\t \n", b);
 b=++a;
 printf("The value of b is %d\t \n", b);
 b=a--;
 printf("The value of b is %d\t \n", b);
 b=--a;
 printf("The value of b is %d\t \n", b);
 return 0;
 }
