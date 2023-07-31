#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> mp;
    long long int t, i, n, x, y;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        mp[x]++;
    }

    // find factorial of n and store in fact array mod 10^9+7
    long long int fact[100000];
    fact[0] = 1;
    fact[1] = 1;

    for (i = 2; i <= 100000; i++)
    {
        fact[i] = (fact[i - 1] * i) % 1000000007;
    }

    long long int p = 1, q = 1;
    long long int mod = 1000000007;

    q = fact[n] % mod;

    vector<int> v;
    for (auto i : mp)
    {
        p = p * fact[i.second];
    }
    p = p % mod;

    int long long q10 = pow(q, 10), temp = 1;
    for (int i = 0; i < 9; i++)
    {
        temp = ((temp % mod) * (q10 % mod)) % mod;
    }
    int long long q5 = pow(q, 5);
    q = ((q10 % mod) * (temp % mod) * (q5 % mod)) % mod;

    cout << ((p % mod) * (q % mod)) % mod << endl;

    return 0;
}