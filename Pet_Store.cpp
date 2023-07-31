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
        bool flag = true;
        for (i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (auto x : mp)
        {
            if (x.second % 2 == 1)
            {
                flag = false;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
   

    }
    return 0;
}