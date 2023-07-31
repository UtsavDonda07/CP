#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int m, n;
    long long int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int sum = 0;
        for (i = 0; i < n; i++)
        {
            long long int dif1 = abs(arr[i] - 1);
            long long int dif2 = abs(arr[i] - m);
            if (dif1 > dif2)
            {
                sum = sum + dif1;
            }
            else
            {
                sum = sum + dif2;
            }
        }
        cout << sum << endl;
    }
    return 0;
}