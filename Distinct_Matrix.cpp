#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n][n];

        if (n <= 2)
            cout << -1 << endl;
        else
        {

            for (i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    arr[i][j] = 0;
                }
            }

            for (i = 0; i < n; i++)
            {
                arr[i][i] = 1;
            }
            for (i = 0; i < n; i++)
            {
                arr[0][i] = 1;
            }

            for (i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << arr[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}