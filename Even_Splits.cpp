#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;
        int zero = 0;
        for (i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                zero++;
            }
        }
        int one = n - zero;
        if (n > 2)
        {
            for (int i = 0; i < zero; i++)
            {
                cout << 0;
            }
            for (int i = 0; i < one; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << str[i];
            }
            cout << endl;
        }
    }
    return 0;
}