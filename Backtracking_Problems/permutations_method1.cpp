#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> vc;

        sort(nums.begin(), nums.end());

        do
        {
            vc.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return vc;
    }
};