#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        map<int, int> mp;
        int i = 0;

        for (i = 0; i < nums.size(); ++i)
        {
            int calc = target - nums[i];

            if (mp.find(calc) != mp.end())
            {
                result.push_back(mp.find(calc)->second);
                result.push_back(i);
                return result;
            }
            mp[nums[i]] = i;
        }

        return result;
    }
};