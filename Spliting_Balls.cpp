#include <bits/stdc++.h>
using namespace std;
#define m9 1000000007
long long int fact[1000001];
void f()
{
    fact[0] = 1;
    fact[1] = 1;
    for (long long int i = 2; i <= 1000000; i++)
    {
        fact[i] = i * fact[i - 1];
        fact[i] = fact[i] % m9;
    }
}
int main()
{

    long long int t, i, n;

    cin >> t;
    f();
    while (t--)
    {
        cin >> n;

        long long int arr[n];
        long long int sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            sum += fact[arr[i]];
            sum = sum % m9;
        }
        cout << sum << endl;
    }
    return 0;
}