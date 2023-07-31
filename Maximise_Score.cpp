#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        vector<int> ans;
        for (i = 0; i < n - 1; i++)
        {
            ans.push_back(abs(a[i] - a[i + 1]));
        }
        for (i = 1; i < n - 1; i++)
        {
            ans.push_back(abs(a[i] - a[i - 1]));
        }
        ans.push_back(abs(a[0] - a[n - 1]));
        ans.push_back(abs(a[n - 1] - a[n - 2]));

        int min = *min_element(ans.begin(), ans.end());
        cout << min << endl;
    }
    return 0;
}