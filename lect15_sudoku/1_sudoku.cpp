#include <bits/stdc++.h>
using namespace std;

void print(string board[][9], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}

bool isValid(int col, int row, string c, string board[9][9], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (board[row][i] == c)
            return false;
        if (board[i][col] == c)
            return false;

        if (board[(3 * (row / 3) + (i / 3))][(3 * (row / 3) + (i % 3))] == c)
            return false;
    }
    return true;
}

bool solve(int n, string board[9][9])
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (board[row][col] == ".")
            {
                for (char i = '1'; i <= '9'; i++)
                {
                    if (isValid(col, row, to_string(i), board, n))
                    {
                        board[row][col] = to_string(i);
                        if (solve(n, board))
                        {
                            return true;
                        }
                        else
                        {
                            board[row][col] = ".";
                        }
                    }
                }
                return false;
            }
        }
    }

    print(board, n);
    return true;
}

int main()
{
    int n = 9;
    string board[n][n] = {{"5", "3", ".", ".", "7", ".", ".", ".", "."},
                          {"6", ".", ".", "1", "9", "5", ".", ".", "."},
                          {".", "9", "8", ".", ".", ".", ".", "6", "."},
                          {"8", ".", ".", ".", "6", ".", ".", ".", "3"},
                          {"4", ".", ".", "8", ".", "3", ".", ".", "1"},
                          {"7", ".", ".", ".", "2", ".", ".", ".", "6"},
                          {".", "6", ".", ".", ".", ".", "2", "8", "."},
                          {".", ".", ".", "4", "1", "9", ".", ".", "5"},
                          {".", ".", ".", ".", "8", ".", ".", "7", "9"}};
    solve(n, board);

    return 0;
}


/*

for reference :

https://leetcode.com/submissions/detail/801320731/

*/