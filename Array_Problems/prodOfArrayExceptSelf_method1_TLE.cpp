#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res(n);
        int prod;

        for (int i = 0; i < n; ++i)
        {
            prod = 1;

            for (int j = 0; j < i; ++j)
            {
                prod *= nums[j];
            }
            for (int k = i + 1; k < n; ++k)
            {
                prod *= nums[k];
            }
            res[i] = prod;
        }
        return res;
    }
};