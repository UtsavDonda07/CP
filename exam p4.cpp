#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n, t;

    cin >> t;
    while (t--)
    {
        bool flag = false;
        string str;
        cin >> str;

        n = str.length();

        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (str[i] != str[i + (n / 2)])
                {
                    flag = true;
                    cout << "NO" << endl;
                    break;
                }
            }
            if (flag != true)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}