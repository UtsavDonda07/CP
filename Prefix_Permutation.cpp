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
        cin >> n;

        if (n % 2 != 0)
            cout << "-1" << endl;
        else
        {
            for (i = 1; i <= n; i++)
            {
                cout << i + 1 << " " << i << " ";
                i++;
            }

            cout << endl;
        }
    }
    return 0;
}