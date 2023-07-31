#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i;

    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        int ans = 0;
        vector<pair<int, int>> arr;
        for (i = 0; i < n; i++)
        {
            int mf, lf;
            cin >> mf >> lf;
            if (l == lf)
            {
                arr.push_back(make_pair(mf, lf));
            }
        }

        if (arr.size() < k)
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(arr.begin(), arr.end(), greater<pair<int, int>>());

            for (i = 0; i < k; i++)
            {
                ans += arr[i].first;
            }

            cout << ans << endl;
        }
    }

    return 0;
}