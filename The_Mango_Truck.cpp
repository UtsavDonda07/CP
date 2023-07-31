#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, z, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        cout << floor(abs(z - y) / x) << endl;
    }

    return 0;
}