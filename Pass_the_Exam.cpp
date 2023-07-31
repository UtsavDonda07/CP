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
        if (a >= 10 && b >= 10 && c >= 10)
        {
            if (a + b + c >= 100)
            {
                cout << "PASS" << endl;
            }
            else
            {
                cout << "FAIL" << endl;
            }
        }
        else
            cout << "FAIL" << endl;
    }

    return 0;
}