#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void subsetUtil(vector<int> &arr, vector<vector<int>> &res, vector<int> &subset, int index)
    {
        if (find(res.begin(), res.end(), subset) == res.end())
        {
            res.push_back(subset);
        }

        for (int i = index; i < arr.size(); ++i)
        {
            subset.push_back(arr[i]);
            subsetUtil(arr, res, subset, i + 1);
            subset.pop_back();
        }
        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> subset;

        sort(nums.begin(), nums.end());

        int index = 0;

        subsetUtil(nums, res, subset, index);

        return res;
    }
};