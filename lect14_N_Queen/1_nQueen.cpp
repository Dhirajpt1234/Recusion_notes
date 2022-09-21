#include <bits/stdc++.h>
using namespace std;

void print(vector<string> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
}

bool isSafe(int row, int col, vector<string> board, int n)
{

    // left row
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 'Q')
            return false;
    }

    // upper left diagonal
    int i = row, j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;

        i--;
        j--;
    }

    // lower left diagonal
    i = row, j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;

        j--;
        i++;
    }

    return true;
}

void nQueen(int col, vector<string> board, int n)
{
    if (col == n)
    {
        print(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {

            board[row][col] = 'Q';
            nQueen(col + 1, board, n);
            board[row][col] = '.';
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<string> board;
    for (int i = 0; i < n; i++)
    {
        string s = "";
        for (int j = 0; j < n; j++)
        {
            s.push_back('.');
        }
        board.push_back(s);
    }

    nQueen(0, board, n);

    return 0;
}