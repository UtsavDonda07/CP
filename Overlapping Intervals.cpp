#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n / 2], b[n / 2];
        int j = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            if (i % 2 == 0)
            {
                a[j] = m;
                j++;
            }
            else
            {
                b[k] = m;
                k++;
            }
        }
        sort(a, a + n / 2);

        for (int i = 0; i < n / 2; i++)
        {

            cout << a[i] << " " << b[i] << endl;
        }
        // for (int i = 0; i < n / 2; i++)
        // {
        //     cout <<  << endl;
        // }
    }
    return 0;
}