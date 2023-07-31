#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    int t;

    cin >> t;
    while (t--)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        int sum = 0;
        if (arr[0] > 0)
        {
            arr[0]--;
            sum++;
        }
        if (arr[1] > 0)
        {
            arr[1]--;
            sum++;
        }
        if (arr[2] > 0)
        {
            arr[2]--;
            sum++;
        }
        sort(arr, arr + 3, greater<int>());

        if (arr[0] > 0 && arr[1] > 0)
        {
            arr[0]--;
            arr[1]--;
            sum++;
        }
        if (arr[0] > 0 && arr[2] > 0)
        {
            arr[0]--;
            arr[2]--;
            sum++;
        }
        if (arr[1] > 0 && arr[2] > 0)
        {
            arr[1]--;
            arr[2]--;
            sum++;
        }
        cout << sum << endl;
    }

    return 0;
}