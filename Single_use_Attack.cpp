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
        cin >> n >> x >> y;
        int ans = n - y;
        float p = ceil(1.0 * ans / x);
        cout << p + 1 << endl;
    }
    return 0;
}