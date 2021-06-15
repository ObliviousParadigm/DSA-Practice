#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int curr_max = prices[prices.size() - 1];
        int ans = 0;

        for (int i = prices.size() - 2; i >= 0; --i)
        {
            curr_max = max(curr_max, prices[i]);
            ans = min(ans, prices[i] - curr_max);
        }

        return abs(ans);
    }
};