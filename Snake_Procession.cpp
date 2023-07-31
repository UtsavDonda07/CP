#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str;
        bool flag = false;
        char ch[n];
        int j = 0;
        count = 0;
        for (i = 0; i < n; i++)
        {
            if (str[i] == 'H' || str[i] == 'T')
            {
                count++;
            }
        }
        int len = count;
        for (i = 0; i < n; i++)
        {
            if (str[i] == 'H' || str[i] == 'T')
            {
                ch[j] = str[i];
                j++;
            }
        }

        if (len % 2 == 0)
        {
            for (i = 0; i < len; i++)
            {
                if (i % 2 == 0)
                {
                    if (ch[i] == 'H')
                    {
                        continue;
                    }
                    else
                    {
                        flag = true;
                        break;
                    }
                }
                else
                {
                    if (i % 2 == 1)
                    {
                        if (ch[i] == 'T')
                        {
                            continue;
                        }
                        else
                        {
                            flag = true;
                            break;
                        }
                    }
                    else
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        else
        {
            flag = true;
        }

        if (flag == true)
            cout << "Invalid" << endl;
        else
            cout << "Valid" << endl;
    }

    return 0;
}