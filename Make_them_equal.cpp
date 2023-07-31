#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = 0, y = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                x++;
            }
            else if (a[i] == n)
            {
                y++;
            }
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            if (x > y)
            {
                cout << x + n - 1 - y - 1 << endl;
            }
            if (x < y)
            {
                cout << x + n - 1 - y << endl;
            }
            else{
                cout<<
            }
        }
    }

    return 0;
}
