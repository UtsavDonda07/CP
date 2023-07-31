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
       
        cin >> a >> b >> n;
         int x=a^b;
        if (x == 0)
            cout << 0 << endl;

        else if (x < n)
            cout << 1 << endl;

        else if (x == n)
            cout << 2 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}