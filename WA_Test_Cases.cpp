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

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> duplicate;
        map<int, int>::iterator p = duplicate.begin();

        for (int i = 0; i < n; i++)
        {
            duplicate[arr[i]] = 0;
        }

       while(p!=duplicate.end())
        {
            if (duplicate[i] == )
                duplicate[arr[i]] = 1;
                p++;
        }
    }
    return 0;
}