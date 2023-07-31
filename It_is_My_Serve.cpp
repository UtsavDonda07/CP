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
        int rem = (x + y) % 4;
        if (rem == 0 || rem == 1)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}