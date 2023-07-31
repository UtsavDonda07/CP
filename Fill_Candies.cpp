#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n, k;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> m;
        float ans = ceil(n / (k * m * 1.0));
        cout<< ans << endl;
    }

    return 0;
}