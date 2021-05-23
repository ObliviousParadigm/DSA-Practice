#include <bits/stdc++.h>

using namespace std;

// GIVES SEGFAULT BUT CAN'T FIND OUT WHY

class Solution
{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n)
    {
        // Your code here
        int high = n - 1;
        int low = 0;

        long long temp[n];
        for (int i = 0; i < n; ++i)
        {
            temp[i] = arr[i];
        }

        int i = 0;

        while (low <= high && i < n)
        {
            if (i % 2 == 0)
            {
                arr[i] = temp[high];
                --high;
            }
            else
            {
                arr[i] = temp[low];
                ++low;
            }
            ++i;
        }
    }
};