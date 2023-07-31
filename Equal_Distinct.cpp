#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int dis, rem, same = 0;
        sort(arr, arr + n);
        for (i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                same++;
            }
        }
        dis = n - same;
        if (dis % 2 == 0 || same >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}