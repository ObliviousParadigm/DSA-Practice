#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maximumSumSubarray(int k, vector<int> &arr, int n)
    {
        int start = 0;
        int end = 0;
        int _sum = 0;
        int _max = 0;

        while (end < k)
        {
            _sum = _sum + arr[end];
            if ((end - start + 1) < k)
            {
                ++end;
            }
            else
            {
                _max = max(_max, _sum);
                _sum = _sum - arr[start];
                ++start;
                ++end;
            }
        }
        return _max;
    }
};