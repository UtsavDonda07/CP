#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        count = 0;
        for (i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {

                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    count++;
                }
            }
        }
            cout << count<<endl;
    }
    return 0;
}