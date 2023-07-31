#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t, i;

    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> m;
        int arr[100], ans = 1;
        int j = 0, end;
        for (i = 1;; i++)
        {
            int x = n / i;
            ans = n / i;
            arr[j] = ans;
            j++;
            if (arr[j] == 0)
            {
                end = i + 1;
                break;
            }
        }

        for (int i = 0; i < end; i++)
        {
           m[arr[i]]++;
        }
          for (auto i = m.begin(); i != m.end(); i++)
        {

           cout<<i->first<<" ";
        }
        cout << endl;
    }
    return 0;
}