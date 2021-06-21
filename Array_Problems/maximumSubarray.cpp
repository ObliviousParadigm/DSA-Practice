#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int curr = 0;
        int max_till_now = INT_MIN;

        for (int i = 0; i < nums.size(); ++i)
        {
            curr += nums[i];
            max_till_now = max(max_till_now, curr);
            if (curr < 0)
            {
                curr = 0;
            }
        }
        return max_till_now;
    }
};