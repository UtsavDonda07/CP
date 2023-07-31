#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n, k;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> x >> y;
        if (x > y)
            cout << k * x + (n - k) * y << endl;
        else
            cout << n * x << endl;
    }

    return 0;
}