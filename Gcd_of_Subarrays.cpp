#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n > k)
        {
            cout << -1 << endl;
        }
        else
        {
            long long int no1 = n - 1;
            long long int sum = no1 * (no1 + 1) / 2;
            long long int z = k - no1 - sum;
            if (z <= 0)
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 0; i < no1; i++)
                {
                    cout << 1 << " ";
                }
                cout << z << endl;
            }
        }
    }

    return 0;
}