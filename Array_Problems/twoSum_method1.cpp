#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        map<int, int> mp;
        int i = 0, j = 0;

        for (auto itr = nums.begin(); itr != nums.end(); ++itr)
        {
            cout << target - *itr << " ";
            mp.insert({target - *itr, i});
            ++i;
        }

        for (auto itr = nums.begin(); itr != nums.end(); ++itr)
        {
            auto itr_mp = mp.find(*itr);

            cout << itr_mp->first << " " << itr_mp->second << endl;

            if (itr_mp != mp.end())
            {
                if (itr_mp->second != j)
                {
                    result.push_back(itr_mp->second);
                    result.push_back(j);
                    return result;
                }
            }
            ++j;
        }
        return result;
    }
};