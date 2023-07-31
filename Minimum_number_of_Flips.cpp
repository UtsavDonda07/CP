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
        int count1 = 0;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                count1++;
        }
        if (n % 2 == 1)
            cout << -1 << endl;
        else
        {
            int minus = n - count1;
            int dif = abs(minus - count1);
            cout << dif / 2 << endl;
        }
    }

    return 0;
}