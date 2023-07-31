#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        map<int, int> m;
        for (i = 0; i < n; i++)
        {

            cin >> arr[i];
            m[arr[i]]++;
        }
        auto j = m.begin();
        int max = j->second;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second > max)
                max = i->second;
        }
        cout << n - max << endl;
    }
    return 0;
}