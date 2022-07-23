/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Assignment No   : 01
*/
#include <stdio.h>
#include <math.h>
int main(){

    // for irrational no please enter decimal no upto high accuracy for correct result

    double x1,y1,x2,y2,x3,y3;           //defining the co ordinates variable
    printf("enter the 1st x and y co-ordinates:");
    scanf("%lf %lf",&x1,&y1);
    printf("enter the 2nd x and y co-ordinates:");
    scanf("%lf %lf",&x2, &y2);
    printf("enter the 3rd x and y co-ordinates:");
    scanf("%lf %lf",&x3, &y3);
    printf("the co-ordinates you have enter are(%lf,%lf),(%lf,%lf),(%lf,%lf)\n",x1,y1,x2,y2,x3,y3);
    double a,b,c,d,e,f;             //defining the sides variable
    d=pow((x2-x1),2)+pow((y2-y1),2);
    e=pow((x3-x2),2)+pow((y3-y2),2);
    f=pow((x3-x1),2)+pow((y3-y1),2);
    a=pow(d,1/2.0);
    b=pow(e,1/2.0);
    c=pow(f,1/2.0);
    double s=(a+b+c)/2.0;
    double area=pow(s*(s-a)*(s-b)*(s-c),1/2.0);     //using heron's formula
    if(area==0){
        printf("the co-ordinates you have entered do not form a triangle");
        return 0;
    }
    else{
        printf("the area of triangle is %lf\n",area);
    }
    // checking for the biggest side
    if(a>=b && a>=c){
        if(d==(e+f)){
            printf("It is a right angle triangle\n");
        }
        else if(d>(e+f)){
            printf("It is a obtuse triangle\n");
        }
        else{
            printf("It is a acute angle triangle\n");
        }
    }
    else if(b>=a && b>=c){
        if(e==(d+f)){
            printf("It is a right angle triangle\n");
        }
        else if(e>(d+f)){
            printf("It is a obtuse triangle\n");
        }
        else{
            printf("It is a acute angle triangle\n");
        }
    }
    else if(c>=b && c>=a){
        if(f==(e+d)){
            printf("It is a right angle triangle\n");
        }
        else if(f>(e+d)){
            printf("It is a obtuse triangle\n");
        }
        else{
            printf("It is a acute angle triangle\n");
        }
    }
    if(a==b && b==c && area!=0){
        printf("It is a equilateral triangle\n");
    }
    else if((a==b ||b==c ||a==c)&& area!=0){
        printf("It is a isosceles triangle\n");
    }
    return 0;
}