#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
        {
            return nums[0];
        }

        int start = 0;
        int end = n - 1;

        if (nums[start] < nums[end])
        {
            return nums[start];
        }

        while (start < end)
        {
            // Forwards
            if (nums[start + 1] > nums[start])
            {
                ++start;
            }
            else
            {
                return nums[start + 1];
            }
            // Backwards
            if (nums[end] > nums[end - 1])
            {
                --end;
            }
            else
            {
                return nums[end];
            }
        }
        return nums[start + 1];
    }
};