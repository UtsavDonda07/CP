#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;

    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == x)
            {
                flag = 1;
                break;
            }
            else if (arr[i] + arr[l] + arr[r] < x)

                l++;

            else
                r--;
        }
        if (flag == 1)
            break;
    }
    cout << flag << endl;

    return 0;
}