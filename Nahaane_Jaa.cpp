#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int a, b, n, t, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long int arr[n];
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1 && arr[0] == k)
            cout << "Yes" << endl;
        else
        {

            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] == k)
                {
                    flag = true;
                    break;
                }
            }

            if (flag == true)
                cout << "Yes" << endl;

            else
                cout << "No" << endl;
        }
    }

    return 0;
}