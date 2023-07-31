#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        list<int> ls;
        if (n > x)
            cout << -1 << endl;
        else
        {
            int f1 = n - 1;
            int f4 = n;
            ls.push_back(f1);
            for (i = 1; i < n; i++)
            {
                ls.push_back(i);
            }
            ls.push_back(f4);
        }
        
    }

    return 0;
}