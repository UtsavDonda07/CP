#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // gcd of all elements
        long long int gcd = arr[0];
        for (int i = 1; i < n; i++)
        {
            gcd = __gcd(gcd, arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] / gcd << " ";
        }
        cout << endl;
    }

    return 0;
}