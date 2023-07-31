#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, x, y, z, m;
    long long int t, i, count = 0, n;

    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        long long int mul = x * y;
        long long int sum = x + y;

        for (i = 1;; i++)
        {
            long long int ans = i * mul - sum;
            long long int e1 = ans + x;
            long long int e2 = ans + y;
            if (e1 % y == 0 && e2 % x == 0)
            {
                if (ans > 0)
                {
                    cout << ans << endl;
                    break;
                }
            }
        }
    }
    return 0;
}