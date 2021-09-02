#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int perfectSum(int arr[], int n, int sum)
    {
        long int dp[n + 1][sum + 1];
        int inf = 1e9 + 7;

        for (int i = 0; i < n + 1; ++i)
        {
            for (int j = 0; j < sum + 1; ++j)
            {
                if (i == 0)
                {
                    dp[i][j] = 0;
                }
                if (j == 0)
                {
                    dp[i][j] = 1;
                }
            }
        }

        for (int i = 1; i < n + 1; ++i)
        {
            for (int j = 1; j < sum + 1; ++j)
            {
                if (arr[i - 1] <= j)
                {
                    dp[i][j] = (dp[i - 1][j - arr[i - 1]] % inf + dp[i - 1][j] % inf) % inf;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j] % inf;
                }
            }
        }

        return dp[n][sum] % inf;
    }
};