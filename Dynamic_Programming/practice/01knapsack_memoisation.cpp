#include <bits/stdc++.h>

using namespace std;

// dp_table[n][m]
// n<=100
// m<=1000
int dp_table[102][1002] = {-1};
// memset(dp_table, -1, sizeof(dp_table));

int knapsack(int wt[], int val[], int W, int n)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }

    if (dp_table[n][W] != -1)
    {
        return dp_table[n][W];
    }

    if (W - wt[n - 1] >= 0)
    {
        dp_table[n][W] = max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1), knapsack(wt, val, W, n - 1));
        return dp_table[n][W];
    }
    else
    {
        dp_table[n - 1][W] = knapsack(wt, val, W, n - 1);
        return dp_table[n][W];
    }
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