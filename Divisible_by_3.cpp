#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;

        if (a == 0 || b == 0 || a % 3 == 0 || b % 3 == 0)
            cout << 0 << endl;

        else if (a == b || (a - b) % 3 == 0)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}