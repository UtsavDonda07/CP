#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, x, y, m, n;
    long long int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int arr[n];
        count = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (i = 1; i <= n; i++)
        {
            if (i > 1)
            {
                if (arr[i] != arr[i - 1])
                {
                    // cout << i << endl;
                    count++;
                    continue;
                }
            }
            if (i < n)
                if (arr[i] != arr[i + 1])
                {
                    // cout << i << endl;
                    count++;
                }
        }
        cout << count << endl;
    }

    return 0;
}