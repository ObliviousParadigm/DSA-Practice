#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int left = 0, right = s.size() - 1;
        char temp;
        while (left < right)
        {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left += 1;
            right -= 1;
        }
    }
};