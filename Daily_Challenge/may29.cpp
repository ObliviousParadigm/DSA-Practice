#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int board[9][9];

    bool isSafe(int row, int col, int n)
    {
        // Column
        for (int i = 0; i < row; ++i)
        {
            if (board[i][col] == 1)
            {
                return false;
            }
        }
        // 45deg diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
        {
            if (board[i][j] == 1)
            {
                return false;
            }
        }
        // 135deg diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
        {
            if (board[i][j] == 1)
            {
                return false;
            }
        }
        return true;
    }

    void totalNQueensUtil(vector<vector<string>> &result, int n, int row)
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
        }

        for (int col = 0; col < n; ++col)
        {
            if (isSafe(row, col, n))
            {
                board[row][col] = 1;
                totalNQueensUtil(result, n, row + 1);
                board[row][col] = 0;
            }
        }
    }

    int totalNQueens(int n)
    {
        vector<vector<string>> result;

        totalNQueensUtil(result, n, 0);

        return result.size();
    }
};