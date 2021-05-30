#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        int i;

        vector<string> res;
        string f = "Fizz";
        string b = "Buzz";
        string fb = "FizzBuzz";

        for (i = 1; i <= n; ++i)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                res.push_back(fb);
            }
            else if (i % 5 == 0)
            {
                res.push_back(b);
            }
            else if (i % 3 == 0)
            {
                res.push_back(f);
            }
            else
            {
                res.push_back(to_string(i));
            }
        }
        return res;
    }
};