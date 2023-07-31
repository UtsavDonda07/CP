#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, x, y, z;
    long long int t, i, count = 0, n;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (abs(a - b) == 1 || abs(b - c) == 1 || abs(a - c) == 1)
            cout << -1 << endl;
        else
        {
            if (a == b && b == c)
            {
                cout << 0 << endl;
            }
            else
            {
                long long int m, mi;
                for (i = 1;; i++)
                {

                    m = max(a, b);
                    m = max(m, c);
                    mi = min(a, b);
                    mi = min(mi, c);

                    if (m == a)
                    {
                        a = a - 1;
                        b++;
                        c++;
                    }
                    else if (m == b)
                    {
                        b = b - 1;
                        a++;
                        c++;
                    }
                    else
                    {
                        c = c - 1;
                        a++;
                        b++;
                    }

                    if (a == b && b == c)
                    {
                        break;
                    }
                }
                cout << i << endl;
            }
        }
    }

    return 0;
}