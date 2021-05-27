#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> mp;
        int i = 0;

        for (i = 0; i < nums.size(); ++i)
        {
            if (mp.find(nums[i]) == mp.end())
            {
                mp.insert({nums[i], 1});
            }
            else
            {
                mp[nums[i]] += 1;
            }
        }
        for (auto itr = mp.begin(); itr != mp.end(); ++itr)
        {
            if (itr->second == 1)
            {
                return itr->first;
            }
        }
        return 0;
    }
};