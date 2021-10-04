#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix[0].size();

        for (vector<int> it : matrix)
        {
            if (target <= it[n - 1])
            {
                if (target == it[n - 1])
                {
                    return true;
                }

                for (int i : it)
                {
                    if (target == i)
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};