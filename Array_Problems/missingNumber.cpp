#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        int real_sum = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
        }
        for (int i = 0; i <= nums.size(); ++i)
        {
            real_sum += i;
        }

        return real_sum - sum;
    }
};