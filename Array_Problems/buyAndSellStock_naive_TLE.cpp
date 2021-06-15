#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        vector<int> diff;
        int temp;

        for (int i = 0; i < prices.size(); ++i)
        {
            for (int j = i + 1; j < prices.size(); ++j)
            {
                temp = prices[i] - prices[j];
                if (temp < 0)
                {
                    diff.push_back(temp);
                }
            }
        }

        if (diff.size() == 0)
        {
            return 0;
        }

        sort(diff.begin(), diff.end());
        return abs(*diff.begin());
    }
};