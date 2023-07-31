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
        
        int flag = 0;
        for (i = 1; i < n-1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) > 1 && abs(arr[i] - arr[i - 1]) > 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}