#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    list<char> ls;
    char odd = ' ';
    unordered_map<char, int> map;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        map[s[i]]++;
    }
    for (auto i = map.begin(); i != map.end(); i++)
    {
        int lim = (i->second) / 2;
        if ((i->second) % 2 == 1)
        {
            odd = i->first;
        }

        for (int j = 0; j < lim; j++)
        {
            char z = i->first;
            ls.push_back(z);
        }
    }
    if (odd != ' ')
        ls.push_front(odd);
    else
    {
        for (auto it = ls.begin(); it != ls.end(); ++it)
        {
            cout << ' ' << *it;
        }
    }
    return 0;
}