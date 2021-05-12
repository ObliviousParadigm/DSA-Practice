#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countTriplet(int arr[], int n)
    {
        sort(arr, arr + n);
        int i = 0, j = 0;
        vector<int> s;
        int count = 0;

        for (i = 0; i < (n - 2); ++i)
        {
            for (j = i + 1; j < (n - 1); ++j)
            {
                s.push_back(arr[i] + arr[j]);
            }
        }
        
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            auto f = find(arr, arr+n, *it);
            if (f != (arr+n))
            {
                count += 1;
            }
        }

        return count;
    }
};

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution ob;
    cout << ob.countTriplet(arr, n) << "\n";
}