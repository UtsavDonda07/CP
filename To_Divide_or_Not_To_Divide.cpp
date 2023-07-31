
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, x, y, z, m, n;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        if (x % y == 0)
            cout << -1 << endl;
        else
        {

            long long int m = n % x;
            long long int ans = n - m;

            if (n % x != 0)
            {
                ans += x;
            }
            if (ans % y == 0)
                ans += x;
            

            cout << ans << endl;
        }
    }
    return 0;
}