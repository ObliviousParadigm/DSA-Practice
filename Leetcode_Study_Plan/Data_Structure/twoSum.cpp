#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {
            auto val = mp.find(target - nums[i]);

            if (val != mp.end())
            {
                return {i, val->second};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};