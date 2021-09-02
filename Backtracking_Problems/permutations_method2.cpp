#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void permuteUtils(vector<vector<int>> &res, vector<int> nums, int pos)
    {
        if (pos == nums.size())
        {
            res.push_back(nums);
            return;
        }

        for (int i = pos; i < nums.size(); ++i)
        {
            swap(nums[pos], nums[i]);
            permuteUtils(res, nums, pos + 1);
            swap(nums[pos], nums[i]);
        }

        return;
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());
        permuteUtils(res, nums, 0);

        return res;
    }
};