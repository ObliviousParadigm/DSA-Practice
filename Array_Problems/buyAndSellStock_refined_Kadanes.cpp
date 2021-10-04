#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int curr_max = prices[n - 1];
        int profit = 0;

        for (int i = n - 2; i >= 0; --i)
        {
            curr_max = max(curr_max, prices[i]);
            profit = max(profit, curr_max - prices[i]);
        }
        return profit;
    }
};