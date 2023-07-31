#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;
    long long int md = 1000000007;

    cin >> t;
    while (t--)
    {
        long long int k;
        cin >> n >> k;
        long long int a = 1;
        for (i = 0; i < n; i++)
        {
            a = (a * k) % md;
            if (k > 1)
                k--;
        }
        cout << a << endl;

    }
    return 0;
}