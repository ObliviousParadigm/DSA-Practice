#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minPartitions(string n)
    {
        string ch;
        ch = n[0];

        int curr_max = stoi(ch);
        int i = 0;

        for (i = 0; i < n.length(); ++i)
        {
            ch = n[i];
            if (stoi(ch) > curr_max)
            {
                curr_max = stoi(ch);
            }
        }

        return curr_max;
    }
};