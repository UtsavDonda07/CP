#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i, n, t;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n;

        for (i = 0;; i++)
        {
            if (a < b)
            {
                a = b + a;
            }
            else
            {
                b = b + a;
            }

            if (b > n || a>n)
            {
                break;
            }
        }
        cout << i + 1 << endl;
    }
    return 0;
}