#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, j, n;

    cin >> t;
    bool arr[10000];

    for (i = 0; i <= 10000; i++)
    {
        arr[i] = true;
    }
    arr[0] = false;
    arr[1] = false;

    for (i = 2; i <= 10000; i++)
    {

        for (j = 2; j <= sqrt(i); j++)
        {

            if (i % j == 0)
            {
                arr[i] = false;
            }
        }
    }
    for (i = 0; i <= 10000; i++)
    {
        cout << i << " " << arr[i] << endl;
    }

    while (t--)
    {
        int a, b;
        cin >> n;
        cin >> a >> b;
    }
    return 0;
}