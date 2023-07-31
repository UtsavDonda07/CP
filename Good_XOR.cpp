#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        int c0 = 0, c1 = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                c0++;
            else
                c1++;
        }
        if (n % 2 == 1 || c1==0)
            cout << -1 << endl;

        else if (c0 == c1)
            cout << 0 << endl;

        else
        {
            if (c0 > c1)
            {
                int ans = (n / 2) - c1;
                cout << ans << endl;
            }
            else
            {
                if ((n / 2) % 2 == 0)
                {
                    cout << n / 4 << endl;
                }
                else
                {
                    int ans = ceil(n / 4.0) + 1;
                    cout << ans << endl;
                }
            }
        }
    }
    return 0;
}