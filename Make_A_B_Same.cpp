#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int a[n], b[n];
        bool one = false;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                one = true;
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (a[0] != b[0] || a[n - 1] != b[n - 1])
        {
            cout << "NO" << endl;
        }
        else
        {
            bool flag = false;

            for (int i = 1; i < n - 1; i++)
            {
                int cur = b[i];
                if (cur != a[i])
                {
                    if (cur == 1)
                    {
                        if (one == true)
                        {
                        }
                        else
                        {
                            flag = true;
                            break;
                        }
                    }
                    else
                    {
                        if (a[i - 1] == 1 || a[i + 1] == 1 || a[i] == 1)
                        {
                            flag = true;
                            break;
                        }
                    }
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