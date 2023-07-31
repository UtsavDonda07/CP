#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, i;
        cin >> n >> m;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        vector<long long> frq(128, 0);
        if (m > n)
        {
            long long temp = n;
            n = m;
            m = temp;
            string tstr = s1;
            s1 = s2;
            s2 = tstr;
        }
        for (i = 0; i < n; i++)
        {
            frq[s1[i]]++;
        }
        for (i = 0; i < m; i++)
        {
            frq[s2[i]]--;
        }

        long long int flag = 1, count = 0, diff = n - m;
        for (long long i = 0; i < 128; i++)
        {
            if (frq[i] < 0)
            {
                flag = 0;
                break;
            }
            if (frq[i] % 2 == 0)
            {
                continue;
            }
            if (count)
            {
                flag = 0;
            }
            else
            {
                count = 1;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}