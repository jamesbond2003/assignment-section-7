/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Assignment No   : 03
*/
#include <stdio.h>
int main(){
    long int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<1){
        printf("please enter a positive no\n");
        return 0;
    }
    printf("The PDS no are :");
    for(int i=1;i<=n;i++){
        int sum=0;
        int k=i;
        while(k!=0){
            int n=k%10;
            int factorial=1;        // calculating factorial using for loops
            for(int p=1;p<=n;p++){
                factorial=factorial*p;
            }
            sum+=factorial;
            k=k/10;
        }
        if(sum==i){
            printf(" %d  ",i);
        }
    }       // checking for LAB number
    printf("\nThe LAB number are:");
    for(int i=1;i<=n;i++){
        int suma=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                suma+=j;
            }
        }
        if(suma==i){
            printf(" %d  ",i);
        }
    }
    printf(" \n");
    int a=n;
    int sum1=0;
    int sum2=0;
    int k=a;
    for(int j=1;j<a;j++){
        if(a%j==0){
            sum1+=j;
        }
    }
    while(k!=0){
        int n=k%10;
        int factorial=1;
        for(int p=1;p<=n;p++){
            factorial=factorial*p;
        }
        sum2+=factorial;
        k=k/10;
    }   
    // checking if it is both PDS AND LAB NUMBER
    if(a==sum1&&a==sum2){
        for (int o = n; o > 1; o--){
            for (int s = 0; s < o; s++){
                printf("*");
        }
        printf("\n");
        }
        for (int m = 0; m <= n; m++){
            for (int q = 0; q < m; q++){
                printf("*");
        }
        printf("\n");
        }
    }
    return 0;
}