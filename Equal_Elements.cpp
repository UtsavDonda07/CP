#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<int, int> mp;
        for (i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        // find max frequency
        int max_count = 0;
        for (auto i : mp)
        {
            if (max_count < i.second)
            {
                max_count = i.second;
            }
        }
        int ans = n - max_count;
        cout << ans << endl;
    }
    return 0;
}