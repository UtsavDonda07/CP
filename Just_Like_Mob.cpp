#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, x, i;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k >> x;
        i = 0;
        bool flag = false;
        int mod = 0, z = 0;
        for (i = 1;; i++)
        {
            mod = floor(i / k);
            int old = z;
            z = i * n + mod * m;
            cout << "mod: " << mod << " z" << i << ": " << z << endl;
            int p = z - m;

            if (z - 1 == x || (p < x && x > old))
            {
                flag = true;
                break;
            }
            if (z > x)
            {
                break;
            }
        }
        if (flag == true)
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