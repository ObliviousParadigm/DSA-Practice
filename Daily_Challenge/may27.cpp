#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int i = 0, j = 0;
        int n = words.size();
        vector<int> mask(n);

        for (i = 0; i < n; ++i)
        {
            for (char ch : words[i])
            {
                mask[i] = mask[i] | (1 << (ch - 'a')); //setBit
            }
        }

        int result = 0;

        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if ((mask[i] & mask[j]) == 0)
                {
                    result = max(result, int(words[i].length() * words[j].length()));
                }
            }
        }

        return result;
    }
};