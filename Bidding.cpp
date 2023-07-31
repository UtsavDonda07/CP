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
        cin >> a >> b >> c;
        if (a > b && a > c)
            cout << "Alice" << endl;

        else if (b > a && b > c)
            cout << "Bob" << endl;
        else
            cout << "Charlie" << endl;
    }

    return 0;
}