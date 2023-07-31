#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;

        cin >> str;
        int count0 = 0, count1 = 0;
        for (i = 0; i < n; i++)
        {
            if (str[i] == '0')
                count0++;
            else
                count1++;
        }
        if (count0 == 1 && count1 == 1)
            cout << "NO" << endl;
        else if (count0 % 2 == 0 || count1 % 2 == 0)
            cout << "YES" << endl;
        else if (abs(count0 - count1) == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}