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
        int diff = y - x;
        if (diff == 2)
            cout << "NO" << endl;
        else if (diff % 3 == 0)
            cout << "YES" << endl;
        else if (diff % 3 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}