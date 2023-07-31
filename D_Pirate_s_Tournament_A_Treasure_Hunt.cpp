#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, d, x, y, z, m, k;
    long long int t, i, count = 0, n;

    vector<int> v;
    cin >> n >> m >> k;

    long long int st[n], id[n], c[k];

    for (i = 0; i < n; i++)
    {
        cin >> st[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> id[i];
    }

    for (i = 0; i < k; i++)
    {
        cin >> c[i];
    }

    unordered_map<int, int> mp;

    for (i = 0; i < n; i++)
    {
        mp[id[i]] = 0;
    }

    for (i = 0; i < n; i++)
    {
        int temp = st[i];
        if (temp > mp[id[i]])
        {
            mp[id[i]] = temp;
        }
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        v.push_back(it->second);
        // cout << it->first << " " << it->second << endl;
    }
    count = 0;
    unordered_map<int, int> mp1;

    for (int i = 0; i < v.size(); i++)
    {
        mp1[v[i]]++;
    }
    bool flag = false;
    for (int i = 0; i < k; i++)
    {
        flag = false;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (c[i] == it->second)
            {
                flag = true;
            }
            // cout << it->first << " " << it->second << endl;
        }
        if (flag == false)
            count++;
    }
    cout << count << endl;

    return 0;
}
