#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r, c, x, y, t;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> r >> c;
        if (r % 2 == 0 && c % 2 == 0)
            cout << 0 << endl;
        else
        {
            x = r % 2;
            y = c % 2;
            int ans = x * c + y * r;
            if (r % 2 == 1 && c % 2 == 1)
                cout << ans - 1 << endl;
            else
                cout << ans << endl;
        }
    }

    return 0;
}