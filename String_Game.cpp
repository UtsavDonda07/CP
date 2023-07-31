#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, n;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str;
        unordered_map<char, int> map;
        bool flag = false;
        if (n % 2 == 1)
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                map[str[i]]++;
            }
            for (auto i = map.begin(); i != map.end(); i++)
            {
                if ((i->second) % 2 != 0)
                {
                    flag = true;
                    break;
                }
            }
            if (flag == true)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}