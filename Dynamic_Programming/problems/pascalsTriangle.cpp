#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;

        for (int i = 1; i < numRows + 1; ++i)
        {
            vector<int> row(i, 1);
            if (i >= 3)
            {
                for (int j = 1; j < i - 1; ++j)
                {
                    cout << j << " ";
                    cout << i - 2 << endl;
                    row[j] = res[i - 2][j - 1] + res[i - 2][j];
                }
            }
            res.push_back(row);
        }
        return res;
    }
};