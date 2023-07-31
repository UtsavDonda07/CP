#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
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
            cin >> a;
            if (a % 2 == 1)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}