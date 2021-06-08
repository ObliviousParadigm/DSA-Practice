#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(vector<vector<int>> &m, int row, int col, int size)
    {
        if (row >= 0 && row < size && col >= 0 && col < size && m[row][col] == 1)
        {
            return true;
        }
        return false;
    }

    void findPathUtil(vector<vector<int>> &m, vector<string> &results, string ans, int row, int col, int size)
    {
        if (row == size - 1 && col == size - 1 && m[row][col] == 1)
        {
            results.push_back(ans);
        }

        if (isValid(m, row, col, size))
        {
            m[row][col] = 0;

            // Down
            findPathUtil(m, results, ans + "D", row + 1, col, size);
            // Left
            findPathUtil(m, results, ans + "L", row, col - 1, size);
            // Right
            findPathUtil(m, results, ans + "R", row, col + 1, size);
            // Up
            findPathUtil(m, results, ans + "U", row - 1, col, size);

            m[row][col] = 1;
        }
        return;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        string ans;
        vector<string> results;

        findPathUtil(m, results, ans, 0, 0, n);

        sort(results.begin(), results.end());

        return results;
    }
};