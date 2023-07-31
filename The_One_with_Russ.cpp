#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n, k;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n >> x >> k;
        int a[n];
        int b[n];
        count = 0;
        bool flag = false;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (i = 0; i < n; i++)
        {
            if (abs(a[i] - b[i]) <= k)
            {
                count++;
            }
            if (count >= x)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}