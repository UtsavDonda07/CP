#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, d, x, y, z, m;
    int t, i, count = 0, n;
    string str;

    int r, c;
    cin >> r >> c;

    char arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print the array
    bool flag = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 'S')
            {
                if (j < c - 1 && arr[i][j + 1] == 'W')
                {
                    flag = true;
                    break;
                }
                if (j > 0 && arr[i][j - 1] == 'W')
                {
                    flag = true;
                    break;
                }
                if (i < r - 1 && arr[i + 1][j] == 'W')
                {
                    flag = true;
                    break;
                }
                if (i > 0 && arr[i - 1][j] == 'W')
                {
                    flag = true;
                    break;
                }
            }
        }
    }

    if (flag == true)
    {
        cout << "No" << endl;
    }
    else
    {

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (arr[i][j] == '.')
                {
                    arr[i][j] = 'D';
                }
            }
        }
        cout << "Yes" << endl;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}