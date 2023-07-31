#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, m, n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], b[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            bool ah = false;
            bool bh = false;

            if (a[i] * 2 < b[i])
            {
                ah = false;
            }
            else
                ah = true;

            if (b[i] * 2 >= a[i])
            {
                bh = true;
            }
            else
                bh = false;

            if (bh == true && ah == true)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}