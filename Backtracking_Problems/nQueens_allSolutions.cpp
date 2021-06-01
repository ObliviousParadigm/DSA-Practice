#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int board[9][9];

    bool isSafe(int n, int row, int col)
    {
        for (int i = 0; i < row; ++i)
        {
            if (board[i][col] == 1)
            {
                return false;
            }
        }

        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
        {
            if (board[i][j] == 1)
            {
                return false;
            }
        }

        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
        {
            if (board[i][j] == 1)
            {
                return false;
            }
        }

        return true;
    }

    void solveNQueensUtil(vector<vector<string>> &result, int n, int row)
    {
        if (row == n)
        {
            vector<string> ans;
            for (int i = 0; i < n; ++i)
            {
                string x = "";
                for (int j = 0; j < n; ++j)
                {
                    if (board[i][j] == 1)
                    {
                        x += "Q";
                    }
                    else
                    {
                        x += ".";
                    }
                }
                ans.push_back(x);
            }
            result.push_back(ans);
            return;
        }

        for (int col = 0; col < n; ++col)
        {
            if (isSafe(n, row, col))
            {
                board[row][col] = 1;
                solveNQueensUtil(result, n, row + 1);
                board[row][col] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> result;

        char chess[n][n];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                chess[i][j] = '.';
            }
        }

        solveNQueensUtil(result, n, 0);

        return result;
    }
};