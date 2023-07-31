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
        cin >> str;
        bool flag = false;
        for (i = 0; i < str.length(); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                if (str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u')
                {
                    if (str[i + 2] == 'a' || str[i + 2] == 'e' || str[i + 2] == 'i' || str[i + 2] == 'o' || str[i + 2] == 'u')
                    {
                        flag = true;
                    }
                }
        }
        if (flag == true)
            cout << "Happy" << endl;
        else
            cout << "Sad" << endl;
    }
    return 0;
}