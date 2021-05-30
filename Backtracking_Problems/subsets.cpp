#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void subsetUtil(vector<int> &arr, vector<vector<int>> &res, vector<int> &subset, int index)
    {
        res.push_back(subset);

        for (int i = index; i < arr.size(); ++i)
        {
            subset.push_back(arr[i]);
            subsetUtil(arr, res, subset, i + 1);
            subset.pop_back();
        }
        return;
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> subset;
        vector<vector<int>> res;

        int index = 0;

        subsetUtil(nums, res, subset, index);

        return res;
    }
};