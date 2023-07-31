#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, n, i, t;

    cin >> n >> x;
    int arr[n];
    long long int ans = 1, sum = 0;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    sum = arr[0];

    for (i = 1; i < n; i++)
    {
        if (sum + arr[i] > x)
        {
            ans++;
            sum = arr[i];
        }
        else
        {
            sum = sum + arr[i];
        }
    }
    cout << ans << endl;

    return 0;
}