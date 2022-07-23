/*
   Name            : Zaid Ahmed Khan
   Roll NO         : 21CH10079
   Assignment No   : 01
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, A[100]; // Declaring an array of size 100 integers
    printf("Enter the value of n\n");
    scanf("%d", &n); // Entering the value of n from user
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        // Generate a random number between -100 and 100
        A[i] = (rand() % 201) - 100;
    }
    //Priting the generated random array
    printf("Random Number Array is");
    for (int m = 0; m < n; m++)
    {
        printf("%d , ",A[m]);
    }
    printf("\n");
    
    //finding the position to split
    // calculating total sum to avoid calculation of sum 2 times
    int total = 0, lsum = 0, rsum=0, mid = 200, diff, x, Flsum, Frsum;
    for (int i = 0; i < n; i++)
    {
        total = total + A[i];
    }
    for (int i = 0; i < n; i++)
    {
        lsum = lsum + A[i];
        rsum = total - lsum;
        if (lsum > rsum)
            diff = lsum - rsum;
        else
            diff = rsum - lsum;
        if (mid > diff)
            mid = diff, x = i, Flsum = lsum, Frsum = rsum;
    }
    printf("Array split position is %d \n", x);
    printf("The sums of the left and right subarrays are %d and %d \n", Flsum, Frsum);
    // Now Finding the closest pair
    int diffCP = 200;
    int a, b;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j]){
                diff = A[i] - A[j];
            }
            else{
                diff = A[j] - A[i];
            }
            if (diff < diffCP){
                diffCP = diff;
                a = A[i];
                b = A[j];
            }
        }
    }
    printf("One closest pair is %d and %d", a, b);
    return 0;
}