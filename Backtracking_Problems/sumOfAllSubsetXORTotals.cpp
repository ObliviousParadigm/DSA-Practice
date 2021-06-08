#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void subsetXORSumUtil(vector<vector<int>> &results, vector<int> &nums, vector<int> &subset, int pos)
    {
        results.push_back(subset);

        for (int i = pos; i < nums.size(); ++i)
        {
            subset.push_back(nums[i]);
            subsetXORSumUtil(results, nums, subset, i + 1);
            subset.pop_back();
        }

        return;
    }

    int subsetXORSum(vector<int> &nums)
    {
        vector<vector<int>> results;
        vector<int> subset;
        int sum = 0;

        subsetXORSumUtil(results, nums, subset, 0);

        for (auto itr = results.begin(); itr != results.end(); ++itr)
        {
            subset = *itr;

            if (subset.size() == 1)
            {
                sum += subset[0];
            }
            else if (subset.size() > 1)
            {
                int xor_sum = subset[0];
                for (int i = 1; i < subset.size(); ++i)
                {
                    xor_sum = xor_sum ^ subset[i];
                }
                sum += xor_sum;
            }
        }

        return sum;
    }
};