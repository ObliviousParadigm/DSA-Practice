#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    //Function to reverse words in a given string.
    string reverseWords(string S)
    {
        stringstream str(S);
        string word;
        vector<string> l;

        // Splitting via delimitter
        while (getline(str, word, '.'))
        {
            // Adding all values to the vector
            l.push_back(word);
        }

        string res = "";

        // Iterating through the vector
        for (auto it = l.rbegin(); it != l.rend(); ++it)
        {
            res = res + (*it + ".");
        }

        // Removing the last "."
        res.pop_back();

        return res;
    }
};