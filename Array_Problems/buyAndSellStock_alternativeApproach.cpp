#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int low = INT_MAX;
        int profit = 0;

        for (int i = 0; i < prices.size(); ++i)
        {
            if (low > prices[i])
            {
                low = prices[i];
            }
            profit = max(profit, prices[i] - low);
        }
        return profit;
    }
};