#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n, greater<int>());

        int m1 = a[0];
        int m2 = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                m2 = a[i + 1];
                break;
            }
        }
        cout << m1 + m2 << endl;
    }

    return 0;
}