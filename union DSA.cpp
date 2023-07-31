#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m], ans[n + m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }
    int j = 0;
    for (int i = n; i < n + m; i++)
    {
        ans[i] = b[j];
        j++;
    }
    sort(ans, ans + n + m);
    int x = n + m;

    for (int i = 1; i < n + m; i++)
    {
        if (ans[i] == ans[i - 1])
        {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}