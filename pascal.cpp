#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10, i, j;

    int pas[n + 1][n + 1];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
                pas[i][j] = 1;
            else
                pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
        }
        // cout << endl;
    }

    // print pascal tringle
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << pas[i][j] << " ";
        cout << endl;
    }

    return 0;
}