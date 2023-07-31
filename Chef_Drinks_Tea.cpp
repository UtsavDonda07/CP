#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y,z, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        if (x <= y)
            cout << z << endl;
        else
            cout << ceil(1.0 * x / y) * z << endl;
    }

    return 0;
}