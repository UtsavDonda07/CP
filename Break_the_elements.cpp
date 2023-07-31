#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int even = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                even++;
        }
        int odd = n - even;
        cout << std::min(even, odd) << endl;
    }
    return 0;
}