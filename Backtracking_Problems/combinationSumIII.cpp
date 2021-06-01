#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void combinationSum3Util(vector<vector<int>> &result, int eleCount, int remainingSum, int start, vector<int> &runningSet)
    {
        if (eleCount == 0 && remainingSum == 0)
        {
            result.push_back(runningSet);
            return;
        }
        for (int i = start; i <= 9; ++i)
        {
            if (find(runningSet.begin(), runningSet.end(), i) == runningSet.end())
            {
                runningSet.push_back(i);
                combinationSum3Util(result, eleCount - 1, remainingSum - i, i + 1, runningSet);
                runningSet.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> result;
        vector<int> runningSet;

        combinationSum3Util(result, k, n, 1, runningSet);

        return result;
    }
};