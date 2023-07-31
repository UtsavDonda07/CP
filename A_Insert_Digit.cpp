#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        int d;
        string str;
        cin >> n >> d;
        cin >> str;
        int num = str[0] - '0';

        if (num < d)
        {
            cout << d;
            for (i = 0; i < n; i++)
            {
                cout << str[i];
            }
            cout << endl;
        }
        else
        {
            for (i = 0; i < n - 1; i++)
            {
                string tmp ;
                tmp += str[i];
                tmp += str[i + 1];
                int num = (int) tmp;
                string tmp2 ;
                tmp2 += str[i];
                tmp2 += d;
                int num2 = (int)tmp2;
                cout << num << " " << num2 << endl;
                if (num2 >= num)
                {
                    cout << str[i];
                }
                else
                {
                    cout << d;
                    cout << str[i];
                }
            }
            cout << endl;
        }
    }
    return 0;
}