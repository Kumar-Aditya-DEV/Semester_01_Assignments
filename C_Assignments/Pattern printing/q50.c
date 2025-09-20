#include<stdio.h>
int main(){

    int n;
    printf("Enter your no ");
    scanf("%d",&n);
    int counter=n*(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(counter>10)
            printf("%d ",counter);
            else
            printf("%d  ",counter);
            counter--;
        }
        printf("\n");
    }
    return 0;
}