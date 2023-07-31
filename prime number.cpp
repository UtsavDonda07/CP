#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, m, t;

    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        bool isPrime[m - n + 1];
        int arr[m - n + 1];

        for (i = 0; i <= m - n; i++)
        {
            isPrime[i] = true;
            arr[i] = i + n;
        }
        // for (int i = 0; i <= m - n; i++)
        // {
        //     cout << arr[i] << isPrime[i] << endl;
        // }

        // isPrime[0] = false;
        // isPrime[1] = true;

        for (int i = n;  i <= m; i++)
        {
            for (int j = i * 2; j <= m; j += 2)
            {
                    isPrime[j] = false;
            }
        }

        for (int i = 0; i <= m; i++)
        { 
                cout << arr[i]<<" "<<isPrime[i]<< endl;
        }
    }
    return 0;
}