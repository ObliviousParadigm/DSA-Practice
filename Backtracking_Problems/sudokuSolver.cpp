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
            comp = board[row][j] - '0';
            if (comp == val)
            {
                return false;
            }
        }
        // Col
        for (int i = 0; i < 9; ++i)
        {
            comp = board[i][col] - '0';
            if (comp == val)
            {
                return false;
            }
        }
        // Box
        int r = row - row % 3;
        int c = col - col % 3;

        for (int i = r; i < r + 3; ++i)
        {
            for (int j = c; j < c + 3; ++j)
            {
                comp = board[i][j] - '0';
                if (comp == val)
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool solveSudokuUtil(vector<vector<char>> &board, vector<char> nums)
    {
        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
            {
                if (board[i][j] == '.')
                {
                    for (int val = 1; val < 10; ++val)
                    {
                        if (isValid(board, i, j, val))
                        {
                            board[i][j] = nums[val - 1];

                            if (solveSudokuUtil(board, nums))
                                return true;

                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>> &board)
    {
        vector<char> nums({'1', '2', '3', '4', '5', '6', '7', '8', '9'});

        solveSudokuUtil(board, nums);
    }
};