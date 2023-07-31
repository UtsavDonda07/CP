#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t, i;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;
        int p = 0, j = 0, m = 0, count = 0;
        while (j < n && str[j] == '1')
        {
            p++;
            j++;
        }

        for (i = j; i < n; i++)
        {
            if (str[i] == '1')
            {
                count++;
            }
            else
            {
                m = max(m, count);
                count = 0;
            }
        }
        m = max(m, count);
        int ans = m + p;
        cout << ans << endl;
    }
    return 0;
}