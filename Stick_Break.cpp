#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        long long l, k;
        cin >> l >> k;
        if (l % k != 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}