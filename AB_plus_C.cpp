#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        long long a, b, c;
        a = 1, c = 1;
        b = n - 1;
        if (n == 1)
            cout << -1 << endl;
        else
            cout << a << " " << b << " " << c << endl;
    }

    return 0;
}