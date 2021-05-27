#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;

        for (auto itr = nums.begin(); itr != nums.end(); ++itr)
        {
            result ^= *itr;
        }
        return result;
    }
};