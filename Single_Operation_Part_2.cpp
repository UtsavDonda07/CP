#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;
        long long int count = 1;
        for (i = 1; i < n; i++)
        {
            if (str[i] == '0')
            {
                count++;
            }
            else
                break;
        }

        cout << count << endl;
    }
    return 0;
}