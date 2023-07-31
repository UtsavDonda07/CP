#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d, x, y, z, m;
    long long int t, i, count = 0, n;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;

        long long int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        count = 0;
        long long int max = *max_element(arr, arr + n);
        for (i = 0; i < n; i++)
        {
            if (arr[i] == max)
            {
                count++;
            }
        }
        if (count > 1)
        {
            if (count % 2 == 0)
            {

                cout << "Zenyk" << endl;
            }
            else
            {

                cout << "Marichka" << endl;
            }
        }
        else
        {
            cout << "Marichka" << endl;
        }
    }
    return 0;
}