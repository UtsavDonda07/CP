#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    // int arr[6] = {1, 1, 1, 2, 2, 1};
    int arr[2] = {1, 1};

    list<int> ans, ls;
    ls.push_back(1);
    auto j = ls.begin();

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < ls.size(); i++)
        {

            int count = 1;
            for (j = i; ls.begin() != ls.end(); j++)
            {
                if (ls[j] == ls[j+1])
                    count++;
                else
                break;
            }
            ans.push_back(count);
            ans.push_back(ls[j]);
            i = j;
            count = 0;
        }
        ls.clear();
        for (auto x : ans)
        {
            ls.push_back(x);
        }
        ans.clear();
    }

    for (auto x : ls)
        cout << x << " ";

    return 0;
}