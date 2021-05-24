#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        char ch;

        for (int i = 0; i < x.length(); ++i)
        {
            if (x[i] == '(' || x[i] == '{' || x[i] == '[')
            {
                s.push(x[i]);
            }

            if (s.empty())
            {
                return false;
            }

            switch (x[i])
            {
            case '}':
                ch = s.top();
                s.pop();
                if (ch != '{')
                {
                    return false;
                }
                break;

            case ')':
                ch = s.top();
                s.pop();
                if (ch != '(')
                {
                    return false;
                }
                break;

            case ']':
                ch = s.top();
                s.pop();
                if (ch != '[')
                {
                    return false;
                }
                break;
            }
        }
        return s.empty();
    }
};