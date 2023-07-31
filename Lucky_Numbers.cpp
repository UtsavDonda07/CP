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
        cin >> n;
        int rem;
        bool flag = false;
        while (n != 0)
        {
             rem = n % 10;
            n = n / 10;
            if (rem == 7)
            {
                flag = true;
                break;
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