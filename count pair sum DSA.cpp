#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Logic 2

    // int pl = 0;
    // int pr = n - 1;

    // for (int i = 0;; i++)
    // {
    //     if (pl == n - 1)
    //     {
    //         break;
    //     }
    //     else if (pl < pr)
    //     {
    //         if (arr[pl] + arr[pr] == k)
    //         {
    //             count++;
    //         }
    //         pr--;
    //     }
    //     else if (pr == pl)
    //     {
    //         pr = n - 1;
    //         pl++;
    //     }
    // }

    // Logic 3 final

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < k)
        {
            int ele = k - arr[i];

            if (m.find(ele) != m.end())
            {
                // key exist
                auto it = m.find(ele);
                cout<<"it" <<endl;
                count += it->second;
            }
            if (m.find(ele) == m.end())
            {
                // key not exist
                m.insert({arr[i], 0});
            }
            auto it = m.find(ele);
            m.insert({arr[i], (it->first) + 1});
        }
    }

    cout << count << endl;
    return 0;
}