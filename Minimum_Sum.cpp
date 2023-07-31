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

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long int gcd = __gcd(arr[0], arr[1]);
        for (i = 2; i < n; i++)
        {
            gcd = __gcd(gcd, arr[i]);
        }
        cout << gcd * n << endl;
    }
    return 0;
}