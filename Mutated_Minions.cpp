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
        cin >> n >> x;
        int arr[n];
        count = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] + x;
            if (arr[i] % 7 == 0)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}