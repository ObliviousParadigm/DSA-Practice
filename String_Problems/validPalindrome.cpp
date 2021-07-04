#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string pal = "";

        for (char c : s)
        {
            if (isalnum(c))
            {
                pal += tolower(c);
            }
        }
        string rev = pal;
        reverse(rev.begin(), rev.end());

        if (rev == pal)
            return true;
        return false;
    }
};