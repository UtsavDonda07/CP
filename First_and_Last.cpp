#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, z, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {

        cin >> n;
        long long int max;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        max = arr[0] + arr[n - 1];

        for (i = 0; i < n - 1; i++)
        {
            int m = arr[i] + arr[i + 1];
            if (max <= m)
            {
                max = m;
            }
        }
        cout << max << endl;
    }
    return 0;
}