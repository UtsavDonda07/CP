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
        cin >> n >> x >>y;
        if(n>=x+2*y)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }

    return 0;
}