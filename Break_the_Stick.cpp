#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, x, y, z, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        if (n % 2 == 0 && x % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0 && x % 2 == 1)
        {
            cout << "YES" << endl;
        }

        else if (n % 2 == 1 && x % 2 == 1)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}