#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, i, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> m;
        for (i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            m[a]++;
        }
        int max = m.begin()->second;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second > max)
                max = i->second;
            // cout << i->first << " " << i->second << endl;
        }
        cout << n - max << endl;
    }
    return 0;
}