#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y, n;
    int t, i;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        long long int count = 0;
        long long int ans;

        if (y % 2 == 1)
            y++;
        if (x % 2 == 0)
        {
            ans = (y - x) / 2;
        }
        else if (x % 3 == 0)
        {
            ans = (y - (x + 3)) / 2 + 1;
        }
        else
        {
            ans = (y - (x + x)) / 2 + 1;
        }

        cout << ans << endl;
    }
    return 0;
}