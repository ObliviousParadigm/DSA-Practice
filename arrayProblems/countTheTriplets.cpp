#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countTriplet(int arr[], int n)
    {
        sort(arr, arr + n);
        int i = 0, j = 0, k = 0;
        int count = 0;

        for (i = 0; i < (n - 2); ++i)
        {
            for (j = i + 1; j < (n - 1); ++j)
            {
                for (k = j + 1; k < n; ++k)
                {
                    if ((arr[i] + arr[j]) == arr[k])
                    {
                        count += 1;
                        break;
                    }
                }
            }
        }
        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";
    }
}