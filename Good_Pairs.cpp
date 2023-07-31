#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, n;
    long long int t, i;

    cin >> t;
    while (t--)
    {
        cin >> n;

        map<int, int> m;
        map<int, int>::iterator it;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            m[a]++;
        }
        long long int sum = 0;
        for (it = m.begin(); it != m.end(); ++it)
        {
            long long int val = (*it).second;
            long long eq = (val * (val - 1)) / 2;
            sum = sum + eq;
        }
        cout << sum << endl;
    }
    return 0;
}