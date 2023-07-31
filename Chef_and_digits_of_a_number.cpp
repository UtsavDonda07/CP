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
        cin >> str;
        int c1 = 0, c0 = 0;
        for (i = 0; i < str.length(); i++)
        {
            if (str[i] == '1')
            {
                c1++;
            }
            else
            {
                c0++;
            }
        }
        if (c0 == 1 || c1 == 1)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}