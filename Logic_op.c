#include <stdio.h>

int main()
{
int x,y;
printf("Write two values x y \n");
scanf("%d%d", &x, &y);
printf("Are the values satisfying the following conditions :- \n");
printf("x>y and y>10 :- %d\t \n", x>y && y>10);
printf("x>y or y>10 :- %d\t \n", x>y || y>10);
printf("x>y and x>10 :- %d\t \n", x>y && x>10);
printf("x>y or x>10 :- %d\t \n", x>y || x>10);
printf("x=y and y>5 :- %d\t \n", x>y && y>5);
printf("x=y or y>5 :- %d\t \n", x>y || y>5);
printf("x<y and y>10 :- %d\t \n", x<y && y>10);
printf("x<y or y>10 :- %d\t \n", x<y || y>10);
return 0;
}
