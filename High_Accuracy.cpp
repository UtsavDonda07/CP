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
        cin >> x;
        float rem = ceil(x / 3.0);
        int mul = rem * 3;
        cout << mul - x << endl;
    }

    return 0;
}