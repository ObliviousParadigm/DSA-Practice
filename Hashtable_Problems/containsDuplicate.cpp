#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> mp;
        int i;

        for (i = 0; i < nums.size(); ++i)
        {
            if (mp.find(nums[i]) == mp.end())
            {
                mp.insert({nums[i], 1});
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};