#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {

        cin >> n;

        if (n < 4)
        {
            cout << -1;
        }
        else
        {

            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= n; i += 2)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}