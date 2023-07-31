#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if ((a % 2 == 1 && b % 2 == 1) || a == 1 || b == 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
