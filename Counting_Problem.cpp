#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, n, t, i, j;
    bool flag = false;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int arr[n], even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 2 && even == 0)
            cout << "YES" << endl;
        else if (odd == 0 && even >= 2)
            cout << "YES" << endl;
        else if (odd % 2 == 0 && even >= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}