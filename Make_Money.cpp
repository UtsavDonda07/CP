#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c, n, t, i, x, j;
    bool flag = false;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> c;

        int arr[n];
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total += arr[i];
        }
        sort(arr, arr + n);
        int ntotal = total;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            ntotal = ntotal - arr[i];
            ntotal = ntotal + x - c;

            // cout<<ntotal<<endl;
            if (total < ntotal)
            {
                arr[i] = x;
                total = ntotal;
                count++;
            }
        }

        int cost = c * count;
        cout << total << endl;
    }

    return 0;
}