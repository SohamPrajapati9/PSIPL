#include <stdio.h>

int main()
{
int x,y;
printf("Enter two values, x & y \n");
scanf("%d%d", &x, &y);
printf("The op are as follows :-");
printf("Is x > y :- %d\t \n", x>y);
printf("Is x < y :- %d\t \n", x<y);
printf("Is x = y :- %d\t \n", x==y);
printf("Is x >= y :- %d\t \n", x>=y);
printf("Is x <= y :- %d\t \n", x<=y);
return 0;
}
