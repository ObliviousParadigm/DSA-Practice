#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countTriplet(int arr[], int n)
    {
        sort(arr, arr + n);
        int i = 0, j = 0, k = 0;
        int count = 0;

        while (j < n)
        {
            cout << arr[j] << " ";
            ++j;
        }

        cout << endl;

        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                for (k = j + 1; k < n; ++k)
                {
                    cout << arr[i] << "+" << arr[j] << "=" << arr[k] << endl;
                    if ((arr[i] + arr[j]) == arr[k])
                    {
                        count += 1;
                        break;
                    }
                }
            }
        }

        // Mistake here is that I'm only checking the very next numbers and not ahead of them
        // while(i+2<n)
        // {
        //     cout<<arr[i]<<"+"<<arr[i+1]<<"="<<arr[i+2]<<endl;
        //     if ((arr[i] + arr[i+1]) == arr[i+2])
        //         count += 1;
        //         ++i;
        //     }
        return count;
    }
};