#include <bits/stdc++.h>
using namespace std;
int unique_sorted(int n, int arr[])

{
    if (n == 0 || n == 1)
        return n;
    int j = 0;

    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];

    arr[j++] = arr[n - 1];

    return j;
}

int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
       n= unique_sorted(n, arr);

        for (i = 0; i < n; i++)
        {
            cout << arr[i] <<" ";
        }
    }
    return 0;
}