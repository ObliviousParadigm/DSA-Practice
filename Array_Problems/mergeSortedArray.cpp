#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int p1 = m - 1;
        int p2 = n - 1;
        int p = m + n - 1;

        while (p >= 0)
        {
            if (p2 < 0)
                break;

            if (p1 >= 0 and nums1[p1] > nums2[p2])
            {
                nums1[p] = nums1[p1];
                --p1;
            }
            else
            {
                nums1[p] = nums2[p2];
                --p2;
            }
            --p;
        }
    }
};