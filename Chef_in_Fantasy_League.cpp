#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n, s;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        int arr[n];
        int arr2[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        int min1 = 35000, min2 = 35000;
        for (i = 0; i < n; i++)
        {
            if (arr2[i] == 0)
            {
                if (arr[i] < min1)
                {
                    min1 = arr[i];
                }
            }

            if (arr2[i] == 1)
            {
                if (arr[i] < min2)
                {
                    min2 = arr[i];
                }
            }
        }
        if (min1 + min2 <= 100 - s)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}