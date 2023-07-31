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
        cin >> a >> b;
        if (a >= b)
            cout << b << endl;
        else
            cout << a << endl;
    }

    return 0;
}