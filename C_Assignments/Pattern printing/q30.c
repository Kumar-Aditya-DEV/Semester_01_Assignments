#include<stdio.h>
int main(){


 int n;
    printf("Enter the number : ");
    scanf("%d",&n);
 for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){  // for  spaces
            printf(" ");
        }
        for(int k=1;k<=i;k++){         //A will be print
            printf("%c",k+64);
        }
        for(int l=i-1;l>0;l--){      //palandrome will be print in 2nd line
            printf("%c",l+64);
        }    
        printf("\n");    
    }


    for(int i=n-1;i>0;i--){        //4 line hame print karni hai decreasing order me
          for(int j=1;j<=n-i;j++){  //for spaces samaz gaya
            printf(" ");
        }
          for(int k=1;k<=i;k++){  //ulta Aprint karne ke liyea 
            printf("%c",k+64);
        }
        for(int l=i-1;l>0;l--){ // palandrome will be printed in 2nd line ulta
            printf("%c",l+64);
        }
        printf("\n");
    }
    return 0;
}