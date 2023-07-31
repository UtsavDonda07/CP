#include <bits/stdc++.h>
using namespace std;
// method
bool isValidSudoku(vector<vector<char>> &board)
{
    int n = 9;
    // check for each row
    for (int i = 0; i < 9; i++)
    {
        unordered_map<char, int> row;
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                row[board[i][j]]++;
                if (row[board[i][j]] > 1)
                    return false;
            }
        }
    }
    // check for each column
    for (int j = 0; j < 9; j++)
    {
        unordered_map<char, int> col;
        for (int i = 0; i < 9; i++)
        {
            if (board[i][j] != '.')
            {
                col[board[i][j]]++;
                if (col[board[i][j]] > 1)
                    return false;
            }
        }
    }

    // check for each 3*3 matrix

    map<int, vector<char>> matrix;
        int part = 0;
    for (int i = 0; i < 9; i++)
    {
        if(i%3==0 && i!=0)
            part=i;

        for (int j = 0; j < 9; j++)
        {
            if (j % 3 == 0 && j != 0)
            {
                part++;
            }
            if (board[i][j] != '.')
                matrix[part].push_back(board[i][j]);
            if(part==3)
                part=0;
        }
    }
    for (auto it = matrix.begin(); it != matrix.end(); it++)
    {
        cout << it->first << " ";
        for (auto i = it->second.begin(); i != it->second.end(); i++)
        {
            cout << *i << " ";
        }
    }


// 0: 5 3 6 9 8 8 4 7 6 
// 1: 7 1 9 5 6 8 3 2 4 1 9 8 
// 2: 6 3 1 6 2 8 5 7 9  


}
int main()
{
    long long int t, i, n;

    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    cout << isValidSudoku(grid) << endl;

    return 0;
}