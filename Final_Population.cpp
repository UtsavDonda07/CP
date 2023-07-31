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
        cin >> a >> b >> c >> d;
        x = a - c;
        y = b - d;
        if (x < y)
            cout << "FIRST" << endl;

        else if (x > y)
            cout << "SECOND" << endl;
        else
            cout << "ANY" << endl;
    }

    return 0;
}