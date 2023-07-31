#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1, s2;
    cin >> s1;
    cin >> s2;

    int n = s1.size();
    int n2 = s2.size();
    list<char> l1, l2;

    if (n != n2)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            l1.push_back(s1[i]);
            l2.push_back(s2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (l1 != l2)
            {
                char temp = l2.front();
                l2.pop_front();
                l2.push_back(temp);
            }
            else
            {
                break;
            }
        }
        if (l1 == l2)
            cout << 1 << endl;

        else
            cout << 0 << endl;
    }

    return 0;
}