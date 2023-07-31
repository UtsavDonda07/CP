#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  c, x, y, m, n;
    int t, i, count = 0;
    long long a,b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        count = 0;

        for (i = 0;; i++)
        {
            if (a % b != 0)
            {
                a++;
            }
            else
            {
                break;
            }
        }
        cout << i << endl;
    }

    return 0;
}