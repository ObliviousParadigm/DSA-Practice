#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> freq;
        vector<int> res;

        for (int i : nums1)
        {
            freq[i] += 1;
        }

        for (int i : nums2)
        {
            if (freq[i])
            {
                res.push_back(i);
                freq[i] -= 1;
            }
        }

        return res;
    }
};
Ar