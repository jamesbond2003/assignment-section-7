/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Assignment No   : 01
*/
#include <stdio.h>
#include <math.h>
// print the contents of an integer array x containing n elements
void printarray(int x[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", x[i]);
    printf("\n");
}
// return 1 if x is a prime integer and 0 otherwise
int isprime(int x)
{
    int flag=1,limit;
    limit=sqrt(x);
    for(int i=2;i<=limit;i++)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
// return 1 if x can be written as the sum of two prime numbers, and 0 otherwise
int sumoftwoprimes(int x)
{
    int m=1,n=x-1;
    // running while loop till the time m becomes greater than n beacause after that 
    // cases will repeat 
    while ((n-m)>=0)
    {
        /* code */
        if(isprime(m)==1 && isprime(n)==1){
            return 1;
        }
        else{
            m++;
            n--;
        }
    }
    return 0;
}
// Create an array x with numbers from a to b which are the sums of two prime numbers.
// Fill in at most size elements in the array. Return the number of elements in the array.
int arraysum2p(int a, int b, int x[], int size)
{
    int j=0;
    for (int i = a; i <= b; i++)
    {
        /* code */
        if (sumoftwoprimes(i)==1)
        {
            x[j]=i;
            j++;
        } 
        if(j==size){
            return j;
        }     
    }
    return j;
}
int main()
{
    int a, b, n;
    int X[100];
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("the value of a is %d , value of b is %d\n",a,b);
    n=arraysum2p(a,b,X,100);
    printarray (X, n) ;
    return 0;
}