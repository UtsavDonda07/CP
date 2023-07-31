#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int dif = 0;
        count = 0;
        int ans;
        for (i = 0; i < n; i++)
        {
            int p = pow(2, i);

            if (p - n == 0)
            {
                count = 1;
                break;
            }
            if (p - n > 0)
            {
                dif = i;
                break;
            }
        }

        for (i = 0; i < dif; i++)
        {
            if (pow(2, dif - 1) + pow(2, i) == pow(2, dif))
            {
                ans = pow(2, i);
            }
        }
        int b1=pow(2,dif-1);
        int o=abs(ans-b1);
        int need = pow(2, dif) - pow(2, dif - 1);

        if (count == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int j = pow(2, dif-1);
            int z = abs(j - n);
            cout << z << endl;
        }
    }

    return 0;
}