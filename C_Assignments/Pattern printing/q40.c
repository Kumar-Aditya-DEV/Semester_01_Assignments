#include<stdio.h>
int main(){

    int n;
    printf("enter no of line :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=2*n-1;k++){
            if((i+k)==(n+1) || (i==n) || (k-i)==(n-1) ){
                 printf("*");
            }
            else{
                 printf(" ");
            }
           
        }
        printf("\n");
    }

    return 0;
}