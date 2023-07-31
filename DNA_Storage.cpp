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
        string arr;
        cin >> arr;

        for (i = 0; i < n; i += 2)
        {
            if (arr[i] == '0' && arr[i + 1] == '0')
            {
                cout << 'A';
            }
            else if (arr[i] == '0' && arr[i + 1] == '1')
            {
                cout << 'T';
            }
            else if (arr[i] == '1' && arr[i + 1] == '0')
            {
                cout << 'C';
            }
            else if (arr[i] == '1' && arr[i + 1] == '1')
            {
                cout << 'G';
            }
        }
        cout << endl;
    }

    return 0;
}