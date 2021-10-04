#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> f1;
        unordered_map<char, int> f2;

        for (char ch : ransomNote)
        {
            if (f1.find(ch) == f1.end())
            {
                f1[ch] = 1;
            }
            else
            {
                f1[ch] += 1;
            }
        }

        for (char ch : magazine)
        {
            if (f2.find(ch) == f2.end())
            {
                f2[ch] = 1;
            }
            else
            {
                f2[ch] += 1;
            }
        }

        for (char ch : ransomNote)
        {
            auto c1 = f1.find(ch);
            auto c2 = f2.find(ch);

            if (c2 == f2.end())
            {
                return false;
            }
            else if (c1->second <= c2->second)
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};