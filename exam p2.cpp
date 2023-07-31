#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0;; i++)
            {
                a++;

                if (a % b == 0)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}