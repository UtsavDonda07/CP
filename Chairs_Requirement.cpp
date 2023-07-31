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
        int dif = x - y;
        if (dif >= 0)
            cout << dif << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}