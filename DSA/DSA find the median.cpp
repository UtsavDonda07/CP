#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if (n % 2 == 1)
    {
        int f = (n / 2);
        cout << arr[f] << endl;
    }
    else
    {
        int ans = (arr[(n / 2) - 1] + arr[n / 2]) / 2;
        cout << ans << endl;
    }

    return 0;
}