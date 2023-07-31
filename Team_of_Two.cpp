#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n][5];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i][0]=x;
            for (int j = 1; j <= x; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            int lim = arr[i][0];
            for (int j = 1; j < lim; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}