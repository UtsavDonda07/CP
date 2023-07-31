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
        count = 0;

        for (i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                count++;
            }
        }
        int zero = n - count;
        if (count == 2 || count == 3)
            cout << "YES" << endl;
        else if (count == 1 && zero >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}