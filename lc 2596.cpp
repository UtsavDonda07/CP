#include <bits/stdc++.h>
using namespace std;

bool checkValidGrid(vector<vector<int>> &grid)
{
    int n = grid.size();
    int x=0,y=0;
    for (int i = 0; i < n * n; i++)
    {
        
    }
}
int main()
{
    long long int t, i, n;

    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    cout << checkValidGrid(grid) << endl;

    return 0;
}