#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t, i;

    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> n;
        string a;
        cin >> a;
        vector<int> v, dis;
        int ind = 0;

        for (i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {

                v.push_back(i);
            }
        }
        for (int i = 1; i < v.size(); i++)
        {
            int sum = abs(v[i] - v[i - 1]);
            dis.push_back(sum);
        }
        bool flag = false;

        for (int i = 0; i < dis.size(); i++)
        {
            if (dis[i] % 2 == 1)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {   
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}
