#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cur = 0, max = 0;
    for (i = 0; i < n; i++)
    {
        cur = cur + arr[i];
        if (cur > max)
            max = cur;
        if (cur < 0)
            cur = 0;
    }

    if (max == 0)
        cout << *max_element(arr, arr + n) << endl;
    else
        cout << max << endl;

    return 0;
}