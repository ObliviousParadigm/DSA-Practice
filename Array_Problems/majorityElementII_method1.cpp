#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        set<int> uniq(nums.begin(), nums.end());
        vector<int> ans;

        for (auto itr = uniq.begin(); itr != uniq.end(); ++itr)
        {
            if (count(nums.begin(), nums.end(), *itr) > nums.size() / 3)
                ans.push_back(*itr);
        }
        return ans;
    }
};