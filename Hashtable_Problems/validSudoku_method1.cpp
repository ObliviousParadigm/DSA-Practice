#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(vector<vector<char>> &board, int row, int col, int val)
    {
        int comp;
        // Row
        for (int j = 0; j < 9; ++j)
        {
            if (j != col)
            {
                comp = board[row][j] - '0';
                if (comp == val)
                {
                    return false;
                }
            }
        }
        // Col
        for (int i = 0; i < 9; ++i)
        {
            if (i != row)
            {
                comp = board[i][col] - '0';
                if (comp == val)
                {
                    return false;
                }
            }
        }
        // Box
        int r = row - row % 3;
        int c = col - col % 3;

        for (int i = r; i < r + 3; ++i)
        {
            for (int j = c; j < c + 3; ++j)
            {
                if (i != row && j != col)
                {
                    comp = board[i][j] - '0';
                    if (comp == val)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
            {
                if (board[i][j] != '.')
                {
                    int val = board[i][j] - '0';
                    if (isValid(board, i, j, val))
                    {
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};