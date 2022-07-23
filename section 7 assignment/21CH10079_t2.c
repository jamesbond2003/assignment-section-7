/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Test No         : 02
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int palindrome(char s[],int i)
{
    int n=strlen(s),flag=1;
    if(i>=n/2)
    {
        return flag;
    }
    else
    {
        if(s[i]!=s[n-i-1])
        {
            flag=0;
            return flag;
        }
        return (s,i+1);
    }
}
int anagram(char s1[],int l,int r)
{
    int n1=strlen(s1),flag=0;
    // Base case
   if (l == r)
   {
       if(palindrome(s1,0)==1)
       {
           flag=1;
           return flag;
       }
   }
   else
   {
      for (int i = l; i <= r; i++)
      {
          // swapping
          char temp=s1[l];
          s1[l]=s1[i];
          s1[i]=temp;
          // Recursion called
          anagram(s1, l+1, r);
          if(palindrome(s1,0)==1)
            {
                flag=1;
                return flag;
            }
          //backtrack
          temp=s1[l];
          s1[l]=s1[i];
          s1[i]=temp;
        }
    }
}

int main()
{
    char str1[1001];
    printf("Please enter a String: ");
    scanf("%s",&str1);
    if(palindrome(str1,0)==1){
        printf("It is a palindrome\n");
    }
    else{
        printf("It is not a palindrome\n");
    }
    if(anagram(str1,0,strlen(str1)-1)==1){
        printf("A palindromic anagram of the string exists\n");
    }
    else{
        printf("No palindromic anagram of the string exists\n");
    }
    return 0;
}