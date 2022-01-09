#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxTillHere = INT_MIN;
        int currMax = 0;

        for (int it : nums)
        {
            currMax = currMax + it;
            maxTillHere = max(maxTillHere, currMax);

            if (currMax < 0)
            {
                currMax = 0;
            }
        }
        return maxTillHere;
    }
};