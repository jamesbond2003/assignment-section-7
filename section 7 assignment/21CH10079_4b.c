/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Assignment No   : 01
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, q, s, d;
    char S[100];
    char Q[100];
    // taking strings as input
    printf("enter the S string with less than or equal to 100 characters: \n");
    scanf("%[^\n]s", S);
    printf("Enter the Q it should only contain character:");
    scanf(" %s", Q);
    printf("the string S is :%s\n", S);
    printf("the string Q is :%s\n", Q);
    
    return 0;
}