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
        cin >> n >> m;
        int sum = (m * (m + 1)) / 2;
        // cout<<sum<<endl;
        if (sum <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}