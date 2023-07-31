#include <bits/stdc++.h>
using namespace std;

bool pelindrome(string st, int l, int r)
{
    if (l >= r)
        return true;

    if (st[l] != st[r])
        return false;

    return pelindrome(st, l = l + 1, r = r - 1);
}
int main()
{
    long long int t, i, n;
    string str;

    cin >> str;
    bool ans = pelindrome(str, 0, str.length() - 1);
    cout << ans << endl;
    return 0;
}