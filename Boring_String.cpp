#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, n, t, i, j;
    bool flag = false;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;

        unordered_map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }
        vector<int> v;
        // find max vlaue in map
        int max = 0;
        int ans = 0;
        for (auto x : mp)
        {
            if (x.second >= 2)
            {
                max = ceil(x.second / 2.0);
                v.push_back(max);
            }
        }
        // print vector
        // sort vector decending
        if (v.size() == 0)
        {
            cout << 0 << endl;
        }
        else
        {

            sort(v.begin(), v.end(), greater<int>());

            int m = v[0];
            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] > m)
                {
                    m = v[i];
                }
            }
            cout << m << endl;
        }
    }

    return 0;
}