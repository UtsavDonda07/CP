#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;
        int len = n;
        int max = 0, i;
        if (n == 2 || n == 1)
            cout << 1 << endl;
        else
        {
            if (str[0] == '1')
                max += 1;
            if (str[n - 2] == '0')
                max += 1;

            for (i = 0; i < len - 2; i++)
            {
                if (str[i] == '0' && str[i + 1] == '1')
                    max += 1;
            }

            cout << max << endl;
        }
    }
    return 0;
}