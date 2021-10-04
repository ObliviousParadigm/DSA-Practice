#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
        {
            return;
        }

        int p1 = 0;
        int p2 = 1;

        while (p2 < n)
        {
            if (nums[p1] == 0)
            {
                if (nums[p2] != 0)
                {
                    swap(nums[p1], nums[p2]);
                    ++p1;
                }
            }
            else
            {
                ++p1;
            }
            ++p2;
        }
    }
};