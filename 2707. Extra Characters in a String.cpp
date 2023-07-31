#include <bits/stdc++.h>
using namespace std;
int minExtraChar(string s, vector<string> &dictionary)
{
    unordered_map<char, int> mp;

    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    for (int i = 0; i < dictionary.size(); i++)
    {
        string str = dictionary[i];
        for (int j = 0; j < str.length(); j++)
        {
            mp[str[j]]--;
        }
    }
    for (auto it : mp)
    {
        if (it.second > 0)
        {
            count += it.second;
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;
        vector<string> dictionary;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            dictionary.push_back(str);
        }
        cout << minExtraChar(s, dictionary) << endl;
    }
    return 0;
}