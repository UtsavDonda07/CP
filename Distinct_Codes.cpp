#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;

        unordered_map<string, int> mp;

        for (i = 0; i < str.length() - 1; i++)
        {
            string s = "";
            s += str[i];
            s += str[i + 1];
            mp[s]++;
        }
        cout << mp.size() << endl;
    }
    return 0;
}