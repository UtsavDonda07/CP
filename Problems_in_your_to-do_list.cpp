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
        count = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 1000)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}