#include<stdio.h>
int main(){

    int n;
    printf("enter no of line :");
    scanf("%d",&n);
    int counter=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         printf("%c ",counter+64);
         counter++;
        }
        printf("\n");
    }

    return 0;
}