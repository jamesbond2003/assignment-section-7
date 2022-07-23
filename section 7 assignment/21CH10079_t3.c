/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Lab test No     : 03
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct
{
    int n; // n stores the point where the value of polynomial will be calculated
    int *arr;
}POLY;
POLY readPoly(POLY a,int degr)  //function for reading polynomial
{
    a.arr=(int * )malloc( (degr+1) * sizeof(int));
    for(int i=0;i<=degr;i++)
    {
        printf("Enter coefficient of x^%d: ",i);
        scanf("%d",&a.arr[i]);
    }
    printf("Enter n: ");
    scanf("%d",&a.n);
    return a;
}
void printPoly(POLY a,int degr)  //function for printing polynomial
{
    printf("%d",a.arr[0]);
    for(int i=1;i<=degr;i++){
        printf("+%dx^%d",a.arr[i],i);
    }
    printf("\n");
}
POLY addPoly(POLY a,POLY b,int deg1,int deg2) //function for adding 2 polynomial
{
    POLY sum;
    int highD=deg2;
    int pn1=0,pn2=0;
    for(int i=0;i<=deg1;i++){
        pn1+=a.arr[i]*pow(a.n,i);
    }
    for(int i=0;i<=deg2;i++){
        pn2+=b.arr[i]*pow(b.n,i);
    }
    sum.n=pn1+pn2;

    if(deg1>deg2)
    {
        highD=deg1;
    }

    sum.arr = (int * )malloc( (highD + 1) * sizeof(int));

    for(int i=0;i<=highD;i++)
    {
        sum.arr[i]=0;

        if(i>deg1)
        {
            sum.arr[i]=b.arr[i];
        }
        else if(i>deg2)
        {
            sum.arr[i]=a.arr[i];
        }
        else
        {
            sum.arr[i]=a.arr[i]+b.arr[i];
        }
    }
    return sum;
}

POLY multiplitPoly(POLY a,POLY b,int deg1,int deg2)
{
    POLY multipli;

    int pn1=0,pn2=0;

    for(int i=0;i<=deg1;i++)
    {
        pn1+=a.arr[i]*pow(a.n,i);
    }
    for(int i=0;i<=deg2;i++)
    {
        pn2+=b.arr[i]*pow(b.n,i);
    }
    multipli.n=pn1*pn2;
    int degr=deg1+deg2;
    multipli.arr = (int * )malloc( (degr+1) * sizeof(int));
    for(int i=0;i<=degr;i++)
    {
        multipli.arr[i]=0;
        for(int j=0;j<=deg1;j++)
        {
            for(int k=0;k<=deg2;k++)
            {
                if(j+k==i)
                {
                    multipli.arr[i]+=a.arr[j]*b.arr[k];
                }
            }
        }
    }
    return multipli;
}

int main(void)
{
    POLY a,b;
    int deg1,deg2;
    printf("Enter values for Polynomial 1:\n");
    printf("Enter the degree of polynomial: ");
    scanf("%d",&deg1);
    a=readPoly(a,deg1);
    printf("\nEnter values for Polynomial 2:\n");
    printf("Enter the degree of polynomial: ");
    scanf("%d",&deg2);
    b=readPoly(b,deg2);
    printf("\na(x) = ");
    printPoly(a,deg1);
    printf("\nb(x) = ");
    printPoly(b,deg2);
    POLY c=addPoly(a,b,deg1,deg2);
    int highD=deg2;
    if(deg1>deg2){
        highD=deg1;
    }
    printf("\na(x)+b(x) = ");
    printPoly(c,highD);
    printf("p(n1)+p(n2) = %d\n",c.n);
    POLY d=multiplitPoly(a,b,deg1,deg2);
    int degr=deg1+deg2;
    printf("\na(x) x b(x) = ");
    printPoly(d,degr);
    printf("p(n1)*p(n2) = %d\n",d.n);
    return 0;
}