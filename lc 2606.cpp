#include <bits/stdc++.h>
using namespace std;

    int maximumCostSubstring(string s, string chars, vector<int> &vals)
    {
        // print everything

        cout<<s<<"chars"<<endl;


        int a=12;
        return a;
    }

int main()
{
    long long int t, i, n;
    string s, chars;
    cin >> s;
    cin >> chars;
    vector<int> vals;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> vals[i];

    int ans = maximumCostSubstring(s, chars, vals);
    cout << ans << endl;
    return 0;
}