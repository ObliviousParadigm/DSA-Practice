#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> result;
        map<int, int> mp;

        for (int i = 0; i < numbers.size(); ++i)
        {
            int diff = target - numbers[i];
            if (mp.find(diff) != mp.end())
            {
                result.push_back(mp.find(diff)->second);
                result.push_back(i + 1);
                return result;
            }
            mp[numbers[i]] = i + 1;
        }
        return result;
    }
};