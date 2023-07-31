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
        int a[n], b[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int count = 0;
        int m = count;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 0 || b[i] == 0)
            {
                if (count > m)
                    m = count;
                count = 0;
            }
            else if (a[i] != 0 && b[i] != 0)
                count++;
        }

        cout << max(count, m) << endl;
    }
    return 0;
}