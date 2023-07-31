#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m;
    int t, i, count = 0, n;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        for (i = 0; i < n; i++)
        {
            arr[i] = arr[i] + 1;
        }
        arr[n - 1] = 1;
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}