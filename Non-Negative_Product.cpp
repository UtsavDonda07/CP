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
        count = 0;
        bool flag = false;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                count++;
            if (arr[i] == 0)
                flag = true;
        }
        if (count % 2 == 0 || flag == true)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}