#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void combinationSum2Util(vector<int> &candidates, int target, vector<vector<int>> &result, vector<int> &runningSet, int index)
    {
        if (target == 0)
        {
            result.push_back(runningSet);
            return;
        }

        for (int i = index; i < candidates.size(); ++i)
        {
            if (i > index && candidates[i] == candidates[i - 1])
                continue;
            if (target - candidates[i] >= 0)
            {
                runningSet.push_back(candidates[i]);
                target -= candidates[i];

                combinationSum2Util(candidates, target, result, runningSet, i + 1);

                target += candidates[i];
                runningSet.pop_back();
            }
        }
        return;
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> runningSet;

        sort(candidates.begin(), candidates.end());

        combinationSum2Util(candidates, target, result, runningSet, 0);

        return result;
    }
};