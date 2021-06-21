#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        set<vector<int>> s;

        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                for (int k = j + 1; k < nums.size(); ++k)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> ans({nums[i], nums[j], nums[k]});
                        sort(ans.begin(), ans.end());
                        s.insert(ans);
                    }
                }
            }
        }

        vector<vector<int>> result(s.begin(), s.end());

        return result;
    }
};