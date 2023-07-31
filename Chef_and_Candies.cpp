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
        cin >> n >> x;
        if (n - x <= 0)
        {

            cout << 0 << endl;
        }

        else
        {
            int dif = n - x;
            cout << ceil(dif / 4.0) << endl;
        }
    }

    return 0;
}