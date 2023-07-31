#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;

    cin >> t;
    while (t--)
    {
        cin >> n;
        n--;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = arr[0];
        int a = 0, b = 0;
        int dif;
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                a = a + arr[i - 1];
                b = b + arr[i - 1];
            }
            else
            {
                a = a + arr[i];
            }

            dif = a - b;
            if (dif < arr[i])
            {
                sum = sum + (arr[i] - dif) + arr[i];
                a = a + arr[i] - dif;
            }
            else
            {
                sum = sum + arr[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}