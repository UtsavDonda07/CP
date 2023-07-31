#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        long long a = (x * x * x * x) + 4 * y * y;
        long long b = 4 * y * x * x;
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}