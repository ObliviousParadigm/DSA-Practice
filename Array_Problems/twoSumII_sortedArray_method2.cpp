#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> result;
        int p1 = 0, p2 = numbers.size() - 1;
        int sum = 0;

        while (p1 < p2)
        {
            sum = numbers[p1] + numbers[p2];
            if (sum < target)
            {
                ++p1;
            }
            else if (sum == target)
            {
                result.push_back(p1 + 1);
                result.push_back(p2 + 1);
                return result;
            }
            else
            {
                --p2;
            }
        }

        return result;
    }
};