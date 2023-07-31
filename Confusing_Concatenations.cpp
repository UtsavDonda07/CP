#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n / 2];
        int b[n / 2];
        int c[n / 2];

        for (i = 0; i < n / 2; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < n / 2; i++)
        {
            cin >> b[i];
        }

        int j = 0;
        int x = a[0];
        int y = b[0];
        int alen = n / 2;
        int blen = n / 2;
        int clen;

        for (int i = 0;; i++)
        {
            if (x < y)
            {
                c[j] = x;
                j++;

                int z = alen--;
                if (z > 0)
                    x = a[i + 1];
                else
                {
                    clen = j - 1;
                    break;
                }
            }
            else
            {
                c[j] = y;
                j++;
                int z = blen--;
                if (z > 0)
                    y = b[i + 1];
                else
                {
                    clen = j - 1;
                    break;
                }
            }
        }
        cout << clen << endl;
        for (int i = 0; i < clen; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
        if (alen <= 0)
        {
             cout << blen << endl;
            for (int i = 0; i < blen; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
        else
        {
             cout << alen << endl;
            for (int i = 0; i < blen; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}