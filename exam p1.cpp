#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    string str1, str2;
    cin >> str1;
    cin >> str2;
    bool flag = false;
    n = str1.length();
    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[n - i - 1])
        {
            flag = true;
        }
    }
    if (flag == true)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}