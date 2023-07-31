#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> x >> y;

        if (x < y)
        {
            b = y - x;
            a = 0;
        }
        if (y < x)
        {
            b = 0;
            a = x - y;
        }

        if (x == y)
        {
            if (x % 2 == 0)
                cout << "CHEFINA" << endl;
            else
                cout << "CHEF" << endl;
        }

        else if (min(x, y) % 2 == 0)
        {
            // even means current chefina
            if (a == 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                if (a > 1)
                    cout << "CHEF" << endl;
                else
                    cout << "CHEFINA" << endl;
            }
        }
        else
        {
            // odd means current chef's turn
            if (b == 0)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                if (b > 1)
                    cout << "CHEFINA" << endl;
                else
                    cout << "CHEF" << endl;
            }
        }
    }
    return 0;
}