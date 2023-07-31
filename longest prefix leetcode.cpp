#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i;
    vector<string> strs = {"flower", "flow", "flight"};
    int n = strs.size();

    string prefix = strs[0];
    for (int i = 1; i < n; i++)
    {
        string temp = strs[i];
        int l = min(temp.size(), prefix.size());
        string com = "";
        for (int j = 0; j < l; j++)
        {
            if (temp[j] == prefix[j])
            {
                string st = strs[i];

                com += st[j];
            }
            else
                break;
        }
        prefix = com;
    }
    cout << prefix << endl;

    return 0;
}