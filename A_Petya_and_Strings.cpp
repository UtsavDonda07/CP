#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;
    string s1, s2;
    cin >> s1;
    cin >> s2;

    for (i = 0; i < s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    if (s1.compare(s2) == 0)
        cout << 0 << endl;
    else if (s1.compare(s2) < 0)
        cout << -1 << endl;
    else
        cout << 1 << endl;

    return 0;
}