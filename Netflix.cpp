#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m;
    int t, i, count = 0, n;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> x;

        if (a + b >= x || b + c >= x || a + c >= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}