#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m;
    int t, i, count = 0, n;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;
        map<char, int> map;
        for (i = 0; i < n; i++)
        {
            map[str[i]]++;
        }
        bool flag = false;
        for (auto it = map.begin(); it != map.end(); it++)
        {
            if (it->second > 1)
            {
                flag = true;
                cout << n - 2 << endl;
                break;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}