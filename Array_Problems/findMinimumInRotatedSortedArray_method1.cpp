#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();

        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            if (nums[end] > nums[start])
            {
                return nums[start];
            }
            else
            {
                start++;
            }
        }
        return nums[start];
    }
};