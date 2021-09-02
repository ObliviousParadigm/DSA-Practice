#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int dp[1001][1001] = {{0}};

    int util(int W, int wt[], int val[], int n)
    {
        if (n == 0 || W == 0)
        {
            return 0;
        }

        if (dp[n][W] != -1)
        {
            return dp[n][W];
        }

        if (wt[n - 1] <= W)
        {
            dp[n][W] = max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
        }
        else
        {
            dp[n][W] = knapSack(W, wt, val, n - 1);
        }
        return dp[n][W];
    }

    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n)
    {
        memset(dp, -1, sizeof(dp));
        return util(W, wt, val, n);
    }
};