

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
        cin >> n >> b;
        a=n-b;
        if (n == b)
            cout << 0 << endl;
        else if (a < b)
            cout << a << endl;
        else
            cout << b << endl;
    }
    return 0;
}