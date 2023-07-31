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
        int ans = ceil(abs(a - b) / 2.0);
        cout << ans << endl;
    }

    return 0;
}