#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n, k, t;

    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (k >= a[i])
            {
                k = k + b[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (k >= a[i])
            {
                k = k + b[i];
            }
        }
        cout<<k<<endl;
    }
    return 0;
}