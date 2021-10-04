#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int n = numbers.size();

        int left = 0;
        int right = n - 1;

        while (left < right)
        {
            int s = numbers[left] + numbers[right];
            if (s == target)
            {
                return {left + 1, right + 1};
            }
            else if (s > target)
            {
                --right;
            }
            else
            {
                ++left;
            }
        }
        return {left + 1, right + 1};
    }
};