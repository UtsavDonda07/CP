#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, x, y, z, m, n;
    long long int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        long long int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (y <= n)
        {
            for (i = 0; i < y; i++)
            {
                long long int min = *min_element(arr, arr + n);
                long long int index = find(arr, arr + n, min) - arr;
                arr[index] = min ^ x;
            }
            sort(arr, arr + n);
            for (i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                long long int min = *min_element(arr, arr + n);
                long long int index = find(arr, arr + n, min) - arr;
                arr[index] = min ^ x;
            }
            sort(arr, arr + n);

            if (y % 2 == 0)
            {
                long long int min = *min_element(arr, arr + n);
                long long int index = find(arr, arr + n, min) - arr;
                arr[index] = min ^ x;
                for (i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}