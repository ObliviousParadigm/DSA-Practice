#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int pos = -1;
        unordered_map<char, int> freq;

        for (char ch : s)
        {
            if (freq.find(ch) == freq.end())
            {
                freq[ch] = 1;
            }
            else
            {
                freq[ch] += 1;
            }
        }

        for (int i = 0; i < s.length(); ++i)
        {
            auto it = freq.find(s[i]);
            if (it->second == 1)
            {
                pos = i;
                break;
            }
        }

        return pos;
    }
};