#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int total = n;

        if (n > 5000)
            total = n - 500;
        else if (n > 1000 && n <= 5000)
            total = n - 100;
        else if (n > 100 && n <= 1000)
            total = n - 25;

        cout << total << endl;
    }
    return 0;
}