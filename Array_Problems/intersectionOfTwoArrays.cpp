#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> st;

        for (int i : nums1)
        {
            st.insert(i);
        }

        set<int> intersection;

        for (int i : nums2)
        {
            if (st.find(i) != st.end())
            {
                intersection.insert(i);
            }
        }

        // vector<int> res(intersection.begin(), intersection.end());
        vector<int> res;
        res.assign(intersection.begin(), intersection.end());
        return res;
    }
};