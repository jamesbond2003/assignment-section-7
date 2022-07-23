/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Assignment No   : 01
*/
#include <stdio.h>
int main(){
    int i,n,rollno;     //defining the variables
    printf("enter how many roll no you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the last 5 digit of Roll No:");
        scanf("%d",&rollno);
        int num=rollno%10;
        switch (num)
        {
        case 0:
            printf("Student have been assigned ERoom\n");
            break;
        case 1:
            printf("Student have been assigned ERoom\n");
            break;
        case 2:
            printf("Student have been assigned DRoom\n");
            break;
        case 3:
            printf("Student have been assigned DRoom\n");
            break;
        case 4:
            printf("Student have been assigned TRoom\n");
            break;
        case 5:
            printf("Student have been assigned TRoom\n");
            break; 
        case 6:
            printf("Student have been assigned CRoom\n");
            break;
        case 7:
            printf("Student have been assigned CRoom\n");
            break;
        case 8:
            printf("Student have been assigned PRoom\n");
            break;
        case 9:
            printf("Student have been assigned PRoom\n");
            break;
        default:
            break;
        }
    }
    return 0;
}