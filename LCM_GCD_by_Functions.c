#include <stdio.h>

int lcm(int a,int b,int GCD){
  int ans;
  ans=(a*b)/GCD;
  return (ans);
}

int gcd(int a,int b){
  int ans;
  if (a>b){
     int k = a%b;
     if(k>b){
        ans=b;
     }
     else{
        ans=k;
     }
  }
  else{
     int k = b%a;
     if(k>a){
        ans=a;
     }
     else{
        ans=k;
     }
  }
  return(ans);
}

int main(){
  printf("Write two numbers to find their GCD and LCM \n");
  int a,b;
  scanf("%d%d",&a,&b);
  int GCD = gcd(a,b);
  int LCM = lcm(a,b,GCD);
  printf("The GCD of the two numbers is %d & the LCM of the two numbers is %d \n",GCD,LCM);
  return 0;
}
