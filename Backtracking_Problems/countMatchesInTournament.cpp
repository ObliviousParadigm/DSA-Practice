#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numberOfMatchesUtil(int n)
    {
        if (n == 1)
        {
            return 0;
        }
        // Odd
        if (n % 2 != 0)
        {
            cout << (n - 1) / 2 << endl;
            return ((n - 1) / 2) + numberOfMatchesUtil((n + 1) / 2);
        }
        // Even
        else
        {
            cout << n / 2 << endl;
            return (n / 2) + numberOfMatchesUtil(n / 2);
        }
    }

    int numberOfMatches(int n)
    {
        int total;

        total = numberOfMatchesUtil(n);

        return total;
    }
};