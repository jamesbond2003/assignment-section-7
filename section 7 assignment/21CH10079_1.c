/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Assignment No   : 01
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("please enter the first two digits of your roll number:");
    scanf("%d",&a); //%d is use to refer to integer
    char c1,c2;
    // we have use 2 char c1 and c2 because one char can hold only one character
    fflush(stdin);
    printf("please enter the next 2 characters of your roll number:");
    //please enter 2 char without giving gap in between them
    scanf("%c%c",&c1,&c2);
    getchar();
    int b;
    printf("please enter the last 5 digits of your roll number:");
    scanf("%d",&b);
    printf("Hello %d%c%c%d\n",a,c1,c2,b);
    double y=1.234*pow(10,5) + 7.5*pow(10,-3.0) + b;
    printf("The value of y is:%lf\n",y);
    int z= a++ + --b + b--;
    // a++ is post increment operator it will increase the value of after z has been calculated 
    //--b is pre increment operator it will decrease the value of b before calculating value of z
    //after calculating the value of z the value of b will be decreased by 2 in printf function 
    //ex. if a=21 b=10001 then z=21+10000+10000
    printf("The value of a is:%d\nThe value of b is:%d\nThe value of z is:%d \n",a,b,z);
    return 0;
}