#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void combinationSumUtil(vector<int> &candidates, int target, vector<vector<int>> &result, vector<int> &runningSet, int index)
    {
        if (target == 0)
        {
            result.push_back(runningSet);
            return;
        }

        for (int i = index; i < candidates.size(); ++i)
        {
            if (target - candidates[i] >= 0)
            {
                runningSet.push_back(candidates[i]);
                target -= candidates[i];

                combinationSumUtil(candidates, target, result, runningSet, i);

                target += candidates[i];
                runningSet.pop_back();
            }
        }

        return;
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> runningSet;

        combinationSumUtil(candidates, target, result, runningSet, 0);

        return result;
    }
};