#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void permuteUniqueUtil(set<vector<int>> &result, vector<int> &nums, int pos, int end)
    {
        if (pos == end)
        {
            result.insert(nums);
        }

        for (int i = pos; i <= end; ++i)
        {
            swap(nums[pos], nums[i]);
            permuteUniqueUtil(result, nums, pos + 1, end);
            swap(nums[pos], nums[i]);
        }
        return;
    }

    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        set<vector<int>> result;

        permuteUniqueUtil(result, nums, 0, nums.size() - 1);

        vector<vector<int>> res(result.begin(), result.end());

        return res;
    }
};