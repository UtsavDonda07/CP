#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        int c1 = 0, c2 = 0;
        for (i = 0; i < a.length(); i++)
        {
            if (a[i] == '1')
            {
                c1++;
            }
        }
        for (i = 0; i < b.length(); i++)
        {
            if (b[i] == '1')
            {
                c2++;
            }
        }
        if (c1 == c2)
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