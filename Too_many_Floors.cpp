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
        int start = ceil(x / 10.0);
        int end = ceil(y / 10.0);

        cout << abs(start - end) << endl;
    }

    return 0;
}