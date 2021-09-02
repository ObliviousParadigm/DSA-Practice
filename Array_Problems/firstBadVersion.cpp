#include <bits/stdc++.h>

using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int start = 1;
        int end = n;
        int mid;
        int result = n;

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (isBadVersion(mid))
            {
                result = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return result;
    }
};