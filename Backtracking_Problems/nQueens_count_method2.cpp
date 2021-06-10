#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int board[9][9];

    bool isSafe(int row, int col, int n)
    {
        // Col
        for (int i = row - 1; i >= 0; --i)
        {
            if (board[i][col] == 1)
            {
                return false;
            }
        }
        // 45deg
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
        {
            if (board[i][j] == 1)
            {
                return false;
            }
        }
        // 135deg
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
        {
            if (board[i][j] == 1)
            {
                return false;
            }
        }

        return true;
    }

    void solveTotalNQueensUtil(int &count, int row, int n)
    {
        if (row == n)
        {
            count += 1;
        }

        for (int col = 0; col < n; ++col)
        {
            if (isSafe(row, col, n))
            {
                board[row][col] = 1;
                solveTotalNQueensUtil(count, row + 1, n);
                board[row][col] = 0;
            }
        }
        return;
    }

    int totalNQueens(int n)
    {

        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
            {
                board[i][j] = 0;
            }
        }

        int count = 0;
        solveTotalNQueensUtil(count, 0, n);

        return count;
    }
};