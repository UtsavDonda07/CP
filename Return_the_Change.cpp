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
        cin >> x;
        if (x % 10 == 0)
            cout << 100 - x << endl;
        else
        {

            int p = x % 10;
            if (p < 5)
                cout << 100 - x + p << endl;
            else
                cout << 100 - x + p - 10 << endl;
        }
    }
    return 0;
}