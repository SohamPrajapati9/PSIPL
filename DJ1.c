#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;i>0;i--){
            printf(" \t");
        }
        for(int j=1;j<i;j++){
            printf("%d\t",j);
        }
        for(int j=n-i-1;j>0;j--){
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}
