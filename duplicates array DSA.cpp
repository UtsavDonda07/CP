#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i;

    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> arr;
        vector<int> v;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            arr[a]++;
        }

        for (auto i = arr.begin(); i != arr.end(); i++)
        {
            if (i->second > 1)
            {
                v.push_back(i->first);
            }
        }
        if (v.size() == 0)
        {
            return -1;
        }
        else
            return v;
    }
    return 0;
}
