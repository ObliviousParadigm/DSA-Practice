#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string removeDups(string S)
    {
        // Your code goes here
        vector<char> vec;
        string result = "";

        for (int i = 0; i < S.length(); ++i)
        {
            // If it does exist
            if (find(vec.begin(), vec.end(), S[i]) != vec.end())
            {
                continue;
            }
            else
            {
                vec.push_back(S[i]);
                result += S[i];
            }
        }
        return result;
    }
};