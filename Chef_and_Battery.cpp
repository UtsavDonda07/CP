#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int dif = n - 50;
        if (dif > 0 && dif % 3 == 0)
            cout << dif / 3 << endl;
        else if (dif < 0 && abs(dif) % 2 == 0)
            cout << abs(dif) / 2 << endl;
        else if (dif == 0)
            cout << 0 << endl;
        else
        {
            if (dif > 0)
            {
                int x = dif / 3;
                int y = dif % 3;
                if (y == 1)
                    cout << x + 2 << endl;
                else
                    cout << x + 4 << endl;
            }
            else
            {
                int x = abs(dif) / 2;
                cout << x + 3 << endl;
            }
        }
    }

    return 0;
}