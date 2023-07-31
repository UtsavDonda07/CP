#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    int am[m], an[n];

    for (int i = 0; i < n; i++)
    {
        int c0 = 0;
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 0)
                c0++;
        }
        an[i] = c0;
    }

    for (int i = 0; i < m; i++)
    {
        int c0 = 0;
        for (int j = 0; j < n; j++)
        {
            if (grid[j][i] == 0)
                c0++;
        }
        am[i] = c0;
    }

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int cal=(n-an[j]) + (m-am[j]) - an[j] - am[j];
            temp.push_back(cal);
        }
        ans.push_back(temp);
    }

    return ans;
}
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
    }

    return 0;
}