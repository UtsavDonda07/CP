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
        int s = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            s = s + arr[i];
        }
        if (s % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}