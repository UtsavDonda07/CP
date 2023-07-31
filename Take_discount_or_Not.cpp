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

        cin >> n >> x >> y;

       long long int arr[n];
      long long  int sum = 0;
       long long int sum2 = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
            if (arr[i] > y)
                sum2 = sum2 + (arr[i] - y);
        }
       long long int fsum = sum2 + x;

        if (fsum < sum)
            cout << "COUPON" << endl;
        else
            cout << "NO COUPON" << endl;
    }

    return 0;
}