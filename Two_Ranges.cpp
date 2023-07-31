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
        cin >> a >> b >> c >> d;

        map<int, int> mp;
        for (i = a; i <= b; i++)
        {
            mp[i]++;
        }
        for (i = c; i <= d; i++)
        {
            mp[i]++;
        }
        cout << mp.size() << endl;
    }
    return 0;
}