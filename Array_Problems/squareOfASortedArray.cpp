#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res(n, 0);

        int left = 0;
        int right = n - 1;
        int square = 0;
        int p = n - 1;

        while (p >= 0)
        {
            if (abs(nums[left]) > abs(nums[right]))
            {
                square = nums[left];
                ++left;
            }
            else
            {
                square = nums[right];
                --right;
            }
            res[p] = pow(square, 2);
            --p;
        }
        return res;
    }
};