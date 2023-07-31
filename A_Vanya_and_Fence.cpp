#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, i;

    cin >> n >> h;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            sum += 2;
        }
        else
        {
            sum += 1;
        }
    }
    cout << sum << endl;

    return 0;
}