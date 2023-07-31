#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        long long int n, k;
        cin >> n >> k;

        unordered_map<long long int, long long int> map;
        long long int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (map.find(a[i]) == map.end())
                map[a[i]] = b[i];
            else
            {

                if (map[a[i]] > b[i])
                {
                    map[a[i]] = b[i];
                }
            }
        }
        vector<pair<int, int>> v;
        for (auto x : map)
        {
            v.push_back(make_pair(x.second, x.first));
        }
        sort(v.begin(), v.end());
        long long sum = 0;
        if (v.size() < k)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                sum += v[i].first;
            }
            cout << sum << endl;
        }
    }

    return 0;
}