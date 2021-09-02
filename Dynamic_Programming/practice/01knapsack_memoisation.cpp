#include <bits/stdc++.h>

using namespace std;

int knapsack(int wt[], int val[], int W, int n)
{
    int dp_table[101][1001];

    for (int i = 0; i < n + 1; ++i)
    {
        for (int j = 0; j < W + 1; ++j)
        {
            if (i == 0 || j == 0)
                dp_table[i][j] = 0;
        }
    }

    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 1; j < W + 1; ++j)
        {
            if (wt[i - 1] <= W)
            {
                dp_table[i][j] = max(val[i - 1] + dp_table[i - 1][j - wt[i - 1]], dp_table[i - 1][j]);
            }
            else
            {
                dp_table[i][j] = dp_table[i - 1][j];
            }
        }
    }
    return dp_table[n][W];
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