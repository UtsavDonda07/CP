#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int h = n / 2;
        long long int a2[h];
        int x = h;
        if (n % 2 != 0)
            x = h + 1;

        long long int a1[x];

        if (n <= 2)
        {
            for (i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (i = 0; i < x; i++)
            {
                a1[i] = arr[i];
            }
            int j = 0;
            for (i = x; i < n; i++)
            {
                a2[j] = arr[i];
                j++;
            }

            for (i = 0; i < x; i++)
            {
                cout << a1[i] << " ";
                if (i < h)
                    cout << a2[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}