#include <stdio.h>

int main()
{
 float usd,inr;
 printf("Enter USD \n");
 scanf("%f", &usd);
 float exc;
 printf("Enter the current exchange rate \n");
 scanf("%f", &exc);
 inr = exc*usd;
 printf("%f", inr);
 printf("INR");
 return 0;
 }
