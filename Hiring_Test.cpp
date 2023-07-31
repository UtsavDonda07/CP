#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cin >> x >> y;
        string str;
        for (i = 0; i < n; i++)
        {
            int j = -1;
            int arr[100];
            int p = 0, f = 0;
            cin >> str;
            j++;
            for (i = 0; i < m; i++)
            {
                if (str[i] == 'P')
                    p++;
                if (str[i] == 'F')
                    f++;
            }
            if ((p >= y && f >= x - 1) || (f >= x))
            {
                arr[j] = 1;
            }
            else
            {
                arr[j] = 0;
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}