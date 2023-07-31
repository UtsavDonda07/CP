

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        long long int a, b, n;
        cin >> a >> b >> n;
        long long int x = (a + b);
        if (a == b)
            cout << "YES" << endl;
        else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
            cout << "NO" << endl;
        else if ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1))
        {
            // both even
            long long mid = (a + b) / 2;
            long long dif = abs(mid - a);
            if (dif % n == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        else
            cout << "NO" << endl;
    }
    return 0;
}