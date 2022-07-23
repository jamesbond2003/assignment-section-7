/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Lab test No     : 01
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char q[100];
    int flag = 0;
    // please enter password without space
    printf("enter the old password:");
    scanf("%s", q);
    while (flag != -1)
    {
        char s[100];
        int i, alphabets = 0, digits = 0, specialcharacters = 0;
        // taking strings as input
        printf("Enter the new password:");
        scanf("%s", s);
        // printf("the string S is :%s\n", S);
        // printf("the string Q is :%s\n", Q);
        for (i = 0; s[i]; i++)
        {
            // it will consider only small vowel as vowel
            if (s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==11)
                alphabets++;
            else if (s[i] >= 48 && s[i] <= 57)
                digits++;
            else
                specialcharacters++;
                // i have considered all character excep vowel and digits as special character 
        }
        int oldlen = strlen(q), newlen = strlen(s);
        int diff = (newlen - oldlen);
        int hamming = diff;
        for (i = 0; i <= oldlen; i++)
        {
            if (s[i] != q[i])
            {
                hamming++;
            }
        }
        int minhamming = strlen(strcat(q, s))/3;
        if (alphabets < 1)
        {
            printf(" current new password does not qualify as a password , your password should contain atleast 1 vowel\n");
        }
        if (digits < 1)
        {
            printf(" current new password does not qualify as a password , your password should contain atleast 1 digit between 0-9\n");
        }
        if (specialcharacters < 1)
        {
            printf(" current new password does not qualify as a password , your password should contain atleast 1 special character\n");
        }
        if (hamming < minhamming)
        {
            printf(" current new password does not qualify as a password , your hamming distance of s and s' must be at least length(s-s')/3.");
        }
        else
        {
            // value of flag will become -1 if it is a valid password
            flag = -1; 
        }
    }
    printf("you have entered a valid new password");
    return 0;
}