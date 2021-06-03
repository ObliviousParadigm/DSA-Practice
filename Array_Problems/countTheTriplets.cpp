#include <bits/stdc++.h>

using namespace std;

//User function template for C++
class Solution
{
public:
    int countTriplet(int arr[], int n)
    {
        sort(arr, arr + n);
        int i = 0, k = n - 1;
        int j = k - 1;

        int count = 0;
        int comp = INT_MIN;

        while (k > 1)
        {
            i = 0;
            j = k - 1;

            while (i < j)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    ++i;
                    --j;
                    ++count;
                }
                else if (arr[i] + arr[j] < arr[k])
                {
                    ++i;
                }
                else
                {
                    // arr[i] + arr[j] > arr[k]
                    --j;
                }
            }
            --k;
        }
        return count;
    }
};