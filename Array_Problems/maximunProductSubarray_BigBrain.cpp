#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int prod = 1;
        int max_so_far = INT_MIN;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (prod == 0)
                prod = 1;

            prod *= nums[i];
            max_so_far = max(max_so_far, prod);
        }

        prod = 1;

        for (int i = nums.size() - 1; i >= 0; --i)
        {
            if (prod == 0)
                prod = 1;

            prod *= nums[i];
            max_so_far = max(max_so_far, prod);
        }

        return max_so_far;
    }
};