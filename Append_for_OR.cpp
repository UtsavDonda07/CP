#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, x, y, z, m, n;
    long long int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        long long int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long int sor = arr[0];
        for (i = 1; i < n; i++)
        {
            sor = sor | arr[i];
        }
        long long int p = sor | m;
        if (p != m)
        {
            cout << -1 << endl;
        }
        else if (sor == m)
        {
            cout << 0 << endl;
        }
        else
        {
            long long int ans = -1;
            long long int q;
            for (int i = 0; i <= m; i++)

            {
                q = i | sor;
                if (q == m)
                {
                    ans = i;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}