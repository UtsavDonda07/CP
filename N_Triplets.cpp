#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int a = 1, b, c;
        bool flag = false;
        for (i = 2; i < sqrt(n); i++)
        {
            b = i;
            c = n / b;
            if (a * b * c == n && a != b && b != c && c != a)
            {
                flag = true;
                cout << a << " " << b << " " << c << endl;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}