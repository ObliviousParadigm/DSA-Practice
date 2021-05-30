#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maximumGap(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int max = INT_MIN;
        int curr = 0;

        if (nums.size() == 1)
        {
            return 0;
        }

        for (int next = curr + 1; next < nums.size(); ++next)
        {
            if (nums[next] - nums[curr] > max)
                max = nums[next] - nums[curr];
            ++curr;
        }
        return max;
    }
};