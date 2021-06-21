#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int max_sub = nums[0];

        for (int i = 0; i < n; ++i)
        {
            int prod = nums[i];
            for (int j = i + 1; j < n; ++j)
            {
                max_sub = max(max_sub, prod);
                prod *= nums[j];
            }
            max_sub = max(max_sub, prod);
        }

        return max_sub;
    }
};