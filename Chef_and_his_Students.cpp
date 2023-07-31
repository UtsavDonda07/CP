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
        count = 0;
        for (i = 0; i < str.length() - 1; i++)
        {
            if (str[i] == '<' && str[i + 1] == '>')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}