#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n)
    {

        long long int ln = log2(n);
        long long int r = pow(2, ln + 1);
        long long int l = pow(2, ln);
        n = min(n - l, r - n);
        ans++;
    }

    cout << ans;
    return 0;
}