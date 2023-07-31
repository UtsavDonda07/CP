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
            cin >> arr[i];

        long long int per = n * (n - 1) / 2;

        unordered_map<long long int, long long int> mp;
        for (i = 0; i < n; i++)
            mp[arr[i]]++;
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] > 1)
            {
                per -= mp[arr[i]] - 1;
                mp[arr[i]] = mp[arr[i]] - 1;
            }
            else
                mp[arr[i]] = 1;
        }
        cout << per << endl;
    }

    return 0;
}