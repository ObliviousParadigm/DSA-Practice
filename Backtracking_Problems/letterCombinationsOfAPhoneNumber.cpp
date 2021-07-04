#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void letterCombinationsUtil(vector<string> &result, vector<string> &chars, string digits, string ans, int index)
    {
        if (index == digits.size())
        {
            if (digits != "")
                result.push_back(ans);
            return;
        }

        char digit = digits[index];

        for (int i = 0; i < chars[(digit - '0') - 2].size(); ++i)
        {
            letterCombinationsUtil(result, chars, digits, ans + chars[(digit - '0') - 2][i], index + 1);
        }

        return;
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> result;
        vector<string> chars;
        string ans = "";

        chars.push_back("abc");
        chars.push_back("def");
        chars.push_back("ghi");
        chars.push_back("jkl");
        chars.push_back("mno");
        chars.push_back("pqrs");
        chars.push_back("tuv");
        chars.push_back("wxyz");

        letterCombinationsUtil(result, chars, digits, ans, 0);

        return result;
    }
};