#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, n, t, i, j;
    bool flag = false;
    cin >> t;
    while (t--)
    {
        string s1, s2;

        cin >> s1;
        cin >> s2;

        int n = s1.length();
        int c1s1 = 0, c1s2 = 0;
        int c0s1 = 0, c0s2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1')
            {
                c1s1++;
            }
            else
            {
                c0s1++;
            }
            if (s2[i] == '1')
            {
                c1s2++;
            }
            else
            {
                c0s2++;
            }
        }

        int m1 = min(c1s1, c0s2);
        int m2 = min(c0s1, c1s2);
        int total = m1 + m2;
        for (int i = 0; i < total; i++)
        {
            cout << 1;
        }

        for (int i = 0; i < n - total; i++)
        {
            cout << 0;
        }
        cout << endl;
    }

    return 0;
}