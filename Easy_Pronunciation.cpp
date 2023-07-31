#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;
        count = 0;
        for (i = 0; i < n; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count++;
                if (count >= 4)
                    break;
            }
        }
        if (count >= 4)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }

    return 0;
}