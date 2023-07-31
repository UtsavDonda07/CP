#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, n, t, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            count += i - arr[i - 1];
            if (i - arr[i - 1] < 0)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << -1 << endl;
        else
            cout << count << endl;
    }

    return 0;
}