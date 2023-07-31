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
        cout << ceil(x * 1.0 / 6) * y << endl;
    }

    return 0;
}