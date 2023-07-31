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
        if ((x+y)%2==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}