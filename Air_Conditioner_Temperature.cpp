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
        cin >> a >> b >> c;
        if (a <= b && c <= b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}