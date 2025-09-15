#include<stdio.h>
int main(){

         int n;
    printf("Enter your no :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

         printf("%c",i+64);
    }
   
    return 0;
}