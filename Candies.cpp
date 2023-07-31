#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, n, t, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        unordered_map<int, int> m;
        bool flag = false;

        for (int i = 0; i < 2 * n; i++)
        {
           long long int temp;
            cin >> temp;
            m[temp]++;
        }
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second > 2)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "No" << endl;

        else
            cout << "Yes" << endl;
    }

    return 0;
}