#include <iostream>
using namespace std;

#define QUEENS 4 // N-Queen - You can change  Number of Queens

bool valid(int board[QUEENS][QUEENS], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
            return false;
    }
    for (int i = row, j = col; i < QUEENS && j >= 0; i++, j--)
    {
        if (board[i][j])
            return false;
    }
    return true;
}

bool NQueen(int board[QUEENS][QUEENS], int col)
{
    if (col >= QUEENS)
        return true;

    for (int i = 0; i < QUEENS; i++)
    {
        if (valid(board, i, col))
        {
            board[i][col] = 1;
            if (NQueen(board, col + 1)) // Go for the other columns recursively
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}