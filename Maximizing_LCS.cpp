#include <bits/stdc++.h>
using namespace std;
int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs(string s1, string s2, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (s1[m - 1] == s2[n - 1])
        return 1 + lcs(s1, s2, m - 1, n - 1);
    else
        return max(lcs(s1, s2, m, n - 1), lcs(s1, s2, m - 1, n));
}

/* Utility function to get max of 2 integers */
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;

        vector<char> v1, v2;
        int l;
        if(n%2==0)
        {
            l=n/2;
        }
        else
        {
            l=n/2+1;
        }
        for (i = 0; i < l ; i++)
        {
            v1.push_back(str[i]);
        }
        for (i = l; i < n; i++)
        {
            v2.push_back(str[i]);
        }

        reverse(v2.begin(), v2.end());
        string s1;
        string s2;
        for (i = 0; i < n / 2; i++)
        {
            s1.push_back(v1[i]);
        }
        for (i = 0; i < n / 2; i++)
        {
            s2.push_back(v2[i]);
        }

        int m = s1.length();
        int n = s2.length();

        cout << lcs(s1, s2, m, n) << endl;

        // cout << s1 << endl;
        // cout << s2 << endl;
    }
    return 0;
}