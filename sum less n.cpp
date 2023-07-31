#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x;
    cin >> n >> x;

    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum1 = 0, sum2 = 0, sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    // max in array

    int max = *max_element(a, a + n);

    if (sum > 2 * x) // 1 condition remaining
        cout << "NO" << endl;

    else if (max > x)
        cout << "NO" << endl;

    else
    {
        sort(a, a + n, greater<int>());
        sum1 = a[0];
        sum2 = a[1];
        for (i = 2; i < n; i++)
        {
            if (sum1 < sum2)
                sum1 += a[i];
            else
                sum2 += a[i];
        }
        cout << sum1 << " " << sum2 << endl;
        if (sum1 <= x && sum2 <= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}