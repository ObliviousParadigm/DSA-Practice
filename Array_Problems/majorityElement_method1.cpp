#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        set<int> uniq(nums.begin(), nums.end());

        for (auto itr = uniq.begin(); itr != uniq.end(); ++itr)
        {
            if (count(nums.begin(), nums.end(), *itr) > nums.size() / 2)
                return *itr;
        }
        return 1;
    }
};