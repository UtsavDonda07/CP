#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, x, y, m, k, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        for (i = 0; i < n; i++)
        {
            cin >> a;

            if (a <= k)
            {
                k = k - a;
                cout << 1;
            }
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}