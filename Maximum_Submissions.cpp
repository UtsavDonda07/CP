#include <bits/stdc++.h>
using namespace std;
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
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 2 && arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
            {
                if(j>0 && a[j-1]!=a[j]){
                a[j] = arr[i];
                j++;
                }
                 i = i + 2;
            }
            else if (arr[i] == arr[i + 1])
            {
                a[j] = arr[i];
                i++;
                j++;
            }
        }

        for (int i = 0; i < j; i++)
        {

            cout << a[i] << " ";
        }
    }
    return 0;
}