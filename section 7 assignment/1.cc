#include <iostream>
using namespace std;



//It stores the index where the swap has occured
int c = 0;

bool check(int arr[], int l);

int main()
{
    //Getting t from user
    short t;
    cin >> t;

    for (short i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        //Initializing an array
        int arr[n];

        //Getting array input from user 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        

        for (int i = 1; i < n; i++)  
        {
            if (arr[i] < arr[i - 1])
            {
                //Swapping the elements
                int tmp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = tmp;

                c = i;
                //breaking out of the loop
                //as swapping allowed atmost once
                break;
            }
        }

        if (check(arr, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        c = 0;
    }
    return 0;
}

bool check(int arr[], int l)
{
    if (c == 0)
    {
        return true;
    }
    for (int i = c-1; i < l; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}