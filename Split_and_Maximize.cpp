#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int arr[n];
        long long int sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = (sum + arr[i]) % 998244353;
        }
        long long int ans = (sum * (sum - 1)) % 998244353;
        cout << ans << endl;
    }
    return 0;
}