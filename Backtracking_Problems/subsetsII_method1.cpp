#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void subsetUtil(vector<int> &arr, set<vector<int>> &res_set, vector<int> &subset, int index)
    {
        res_set.insert(subset);

        for (int i = index; i < arr.size(); ++i)
        {
            subset.push_back(arr[i]);
            subsetUtil(arr, res_set, subset, i + 1);
            subset.pop_back();
        }
        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        set<vector<int>> res_set;
        vector<int> subset;

        int index = 0;

        sort(nums.begin(), nums.end());

        subsetUtil(nums, res_set, subset, index);

        vector<vector<int>> res;

        res.assign(res_set.begin(), res_set.end());

        return res;
    }
};