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

        if (a > 50)
            cout << "A" << endl;
        else if (b > 50)
            cout << "B" << endl;
        else if (c > 50)
            cout << "c" << endl;
        else
            cout << "NOTA" << endl;
    }

    return 0;
}