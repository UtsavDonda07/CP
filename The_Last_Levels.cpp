#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r, c, x, y, z, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        c = x / 3;
        if (x % 3 == 0)
        {
            c = (x / 3) - 1;
        }
        int ans = x * y + z * c;
        cout << ans << endl;
    }

    return 0;
}