#include <bits/stdc++.h>

using namespace std;

// dp_table[n][m]
// n<=100
// m<=1000
int dp_table[102][1002] = {-1};
// memset(dp_table, -1, sizeof(dp_table));

int knapsack(int wt[], int val[], int W, int n)
{
    int dp[n + 1][W + 1];

    for (int i = 0; i < n + 1; ++i)
    {
        for (int j = 0; j < W + 1; ++j)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; j < W + 1; ++j)
        {
            if (wt[i - 1] <= W)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i-1]], dp[i-1][j]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][W];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    cout << knapsack(wt, val, W, n) << endl;

    return 0;
}