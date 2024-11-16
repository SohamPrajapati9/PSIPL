#include <stdio.h>
#define MAX_SIZE 10

int inp(int (* m)[MAX_SIZE],int r,int c){
    printf("Enter the elements for matrix \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the (%d,%d) element \n",i,j);
            scanf("%d",*(m+i)+j);
        }
    }
    printf("\n \n");
}

void multiply(int (* ans)[MAX_SIZE],int (* m1)[MAX_SIZE],int r1,int c1,int (* m2)[MAX_SIZE],int c2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int sum = 0;
            for(int l=0;l<c1;l++){
                sum += (*(m1[i] +l)) *  (*(m2[l] +j));
            }
            *(ans[i]+j) = sum;
        }
    }
}

int main(){
    int r1,r2,c1,c2;
    printf("Enter the size of 1st matrix (rows,columns) \n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the size of 2nd matrix (rows,columns) \n");
    scanf("%d%d",&r2,&c2);
    int m1[r1][c1],m2[r2][c2];
    if(c1!=r2){
        printf("Cannot perform multiplication \n");
        return 0;
    }
    inp(m1,r1,c1);
    inp(m2,r2,c2);
    int ans[r1][c2];
    multiply(ans,m1,r1,c1,m2,c2);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d \t",*(*(ans+i)+j));
        }
        printf("\n");
    }
}
