#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;

        if (x >= y)
            cout << 0 << endl;
        else
            cout << y - x << endl;
    }

    return 0;
}