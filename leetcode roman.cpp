#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int n = s.length();
    vector<int> ls;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            ls.push_back(1);
        }
        else if (s[i] == 'V')
        {
            ls.push_back(5);
        }
        else if (s[i] == 'X')
        {
            ls.push_back(10);
        }
        else if (s[i] == 'L')
        {
            ls.push_back(50);
        }
        else if (s[i] == 'C')
        {
            ls.push_back(100);
        }
        else if (s[i] == 'D')
        {
            ls.push_back(500);
        }
        else if (s[i] == 'M')
        {
            ls.push_back(1000);
        }
    }

    // vector<int> ans = convert(s);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << ls[i] << " ";
    }

    for (int i = 0; i < ls.size(); i++)
    {
        if (ls[i] > ls[i - 1])
        {
            sum += (ls[i] - ls[i-1]);
            i++;
        }
        else
            sum += ls[i-1];
    }
    // sum+=ls[ls.size()-1];
    ls.clear();
    cout<<endl;
    cout << sum << endl;
    return 0;
}