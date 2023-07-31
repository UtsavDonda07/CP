#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, z, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x <= y)
            cout << y - x << endl;
        else
        {
            if (x - y % 2 == 0)
                cout << floor((x - y) / 2) << endl;
            else
                cout << ((x + 1 - y) / 2) + 1 << endl;
        }
    }

    return 0;
}