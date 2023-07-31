#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int t, i;
    cin >> t;
    while (t--)
    {

        long long int arr[10], k;

        for (i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        cin >> k;

        reverse(arr, arr + 10);
        long long int sum = 0, ans = 10;
        for (i = 0; i < 10; i++)
        {
            sum += arr[i];
            if (sum > k)
            {
                ans = i;
                break;
            }
        }
        cout << 10 - ans << endl;
    }
    return 0;
}