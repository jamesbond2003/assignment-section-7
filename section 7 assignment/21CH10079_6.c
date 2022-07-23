/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Assignment No   : 06
*/
#include <stdio.h>
// recusive function for calculating factorial
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
} 
// recusive function for calculating factorial sum of digits of a number
int digitfactorialsum(int n){
    if (n<=0)
    {
        return 0;
    }
    return digitfactorialsum(n/10)+ factorial(n%10);
}
//recusive function for calculating divisor sum of a number
int divisorsum(int m,int i,int sum){
    if (i==m)
    {
        return sum;
    }
    if(m%i==0){
        sum+=i;
    }
    return divisorsum(m,i+1,sum);
}
//recusive function for printing pds number
void printpds(int n,int i){
    if (i==n+1)
    {
        return;
    }
    // checking if i is a pds number or not
    if (digitfactorialsum(i)==i)
    {
        printf(" %d ",i);
    }
    printpds(n,i+1);
}
//recusive function for printing lab number
void printlab(int n,int i){
    if (i==n+1)
    {
        return;
    }
    // checking if i is a lab number or not
    if (i==divisorsum(i,1,0))
    {
      printf(" %d ",i);
    }   
    printlab(n,i+1);
}
//recusive function for printing stars for a number
void star(int num)
{
    // base case
    if (num == 0)
        return;
    printf("*");
    // recursively calling star()
    star(num - 1);
}
//recusive function for printing upper triangle
void pattern1(int n){
    if(n==1){
        return;
    }
    star(n);
    printf("\n");
    // recursively calling pattern()
    pattern1(n - 1);
}
//recursive function to print the lower triangle
void pattern2(int n, int i)
{
    // base case
    if (n == 0)
        return;
    star(i);
    printf("\n");
    pattern2(n - 1, i + 1);
}
int main(){
    int n;                      // taking n as input from user
    printf("enter a number:");
    scanf("%d",&n);
    printf("the no entered is:%d\n",n);
    printf("the PDS number are :");
    printpds(n,1);              // printing all pds number
    printf("\n");
    printf("the LAB number are :");
    printlab(n,1);              // printing all lab number
    printf("\n");
    // printing n bow patter only when n is both pds and lab number
    if(n==digitfactorialsum(n) && n==divisorsum(n,1,0)){
        pattern1(n);
        pattern2(n,1);
    }
    return 0;
}