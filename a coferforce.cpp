#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        string str;

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> str;
        bool flag = false;
        for (i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {

                if (arr[i] == arr[j])
                {
                    if (str[i] != str[j])
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (flag == false)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}