#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m;
    int t, i, count = 0, n;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        int m = b;
        if (b < c)
            m = b;
        else
            m = c;

        b = b - m;
        c = c - m;

        if (a > b + c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}