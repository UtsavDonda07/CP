#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int a[n];
        long long int b[n];
        long long int s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s1 = s1 + a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            s2 = s2 + b[i];
        }
        if (s1 != s2)
            cout << -1 << endl;
        else
        {
            long long int max = 0, dif = 0;
            for (int i = 0; i < n; i++)
            {
                dif = dif + abs(a[i] - b[i]);
                // if (abs(a[i] - b[i]) >= max)
                // {
                //     max = abs(a[i] - b[i]);
                // }
            }
            if (dif % 2 == 0)
                cout << dif / 2 << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}