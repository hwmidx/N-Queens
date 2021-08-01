#include <iostream>
#include "backtracking.h"
using namespace std;

#define QUEENS 4 // N-Queen - You can change  Number of Queens

int main()
{
    int board[QUEENS][QUEENS] = {};
    // Solution //
    if (NQueen(board, 0) == false)
        cout << "\nSolution does not exit";
    // Display //
    for (int i = 0; i < QUEENS; i++)
    {
        for (int j = 0; j < QUEENS; j++)
            cout << board[i][j] << "  ";
        cout << endl;
    }
    return 0;
}