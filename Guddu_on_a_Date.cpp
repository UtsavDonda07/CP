#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int orig = n;
        long long int l = log10(n) + 1;
        long long int sum = 0, m;

        while (n > 0)
        {
            m = n % 10;
            sum = sum + m;
            n = n / 10;
        }

        long long int li = ceil(1.0 * sum / 10.0);
        li *= 10;

        cout << orig;
        long long int last = abs(li - sum);
        cout << last << endl;

        // long long int i = n / 10;
        // int digit = log10(n);
        // int a = 10;
        // for (int p = 0; p < digit; p++)
        // {
        //     a *= 10;
        // }
        // if (i == 0)
        //     i++;
        // long long int m = 10 - i;
        // // change the value base on digit
        // long long int first = i * a + m;

        // long long int r = first % 10;
        // long long int z = first / 10;
        // long long int p = abs(z - n);
        // long long int q = r - p;
        // if (q < 0)
        // {
        //     q = 9 + q;
        // }
        // long long int ans = n * 10 + q;
        // cout << i << " " << m << " " << first << " " << r << " " << z << " " << p << " " << q << endl;
        // cout << ans << endl;
    }

    return 0;
}