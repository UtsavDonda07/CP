#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        int ans[n];
        count = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (arr[i] - arr[j] == 0)
                {
                    count++;
                }
            }
            ans[i] = count;
            count = 0;
        }

        n = sizeof(ans) / sizeof(ans[0]);
        sort(ans, ans + n, greater<int>());

        if (ans[0] != ans[1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}