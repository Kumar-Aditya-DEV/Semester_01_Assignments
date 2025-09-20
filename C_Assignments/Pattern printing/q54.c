#include<stdio.h>
int main(){

    int n;
    printf("enter no of line :");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i+j==n+1 || j-i==n-1 || i-j==n-1 || i+j==3*n-1){       //if we put i+j=2*n+4 it will run on n=5 but not any other no 
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