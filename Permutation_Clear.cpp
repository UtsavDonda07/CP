#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, k, n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        // int arr[n];
        vector<int> arr;

        for (i = 0; i < n; i++)
        {
            cin >> a;
            arr.push_back(a);
        }
        cin >> k;
        vector<int> arr2;
        unordered_map<int, int> count;

        for (i = 0; i < k; i++)
        {
            cin >> a;
            count[a]++;
        }
        for (i = 0; i < n; i++)
        {
            if (!count[arr[i]])
                cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}