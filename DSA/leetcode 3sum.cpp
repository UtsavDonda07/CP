#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int arr[n], i;
        vector<vector<int>> ans;

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<int, int> mp, tmp;

        for (i = 0; i < n; i++)
            mp[arr[i]]++;

        int l = 0, r = l + 1;

        for (l = 0; l < n - 2; l++)
        {
            for (r = l + 1; r < n - 1; r++)
            {

                int dif = arr[l] + arr[r];
                dif = 0 - dif;
                if (mp.find(dif) != mp.end())
                {

                    int c = 0;
                    if (dif == arr[l])
                    {
                        c++;
                    }
                    if (dif == arr[r])
                    {
                        c++;
                    }
                    if (mp[dif] > c)
                    {
                        vector<int> temp;
                        temp.push_back(arr[l]);
                        temp.push_back(arr[r]);
                        temp.push_back(dif);
                        sort(temp.begin(), temp.end());
                        tmp[dif]=temp[1];
                    }
                }
            }
        }
    //     vector<vector<int>> res;
    //     sort(ans.begin(), ans.end());
    //     // remove duplicates and push to res
    //     for (int i = 0; i < ans.size(); i++)
    //     {
    //         int a = ans[i][0];
    //         int b = ans[i][1];
    //         int c = ans[i][2];
    //         // cout<<a<<" "<<b<<" "<<c<<endl;
    //         if (i == 0)
    //         {
    //             res.push_back(ans[i]);
    //         }
    //         else
    //         {
    //             if (res[res.size() - 1][0] != a || res[res.size() - 1][1] != b || res[res.size() - 1][2] != c)
    //             {
    //                 res.push_back(ans[i]);
    //             }
    //         }
    //     }

    //     for (int i = 0; i < ans.size(); i++)
    //     {
    //         vector<int> temp = ans[i];

    //         for (int j = 0; j < temp.size(); j++)
    //         {
    //             cout << temp[j] << " ";
    //         }
    //         cout << endl;
    //     }


// print tmp
        for (auto it = tmp.begin(); it != tmp.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }

    }
    return 0;
}

// -1 0 1 2 -1

// -1 0 1
// -1 -1 2

// -1 0 1 2 -1 -4 -2 -3 3 0 4
// -4 0 4
// -4 1 3
// -3 -1 4
// -3 0 3
// -3 1 2
// -2 -1 3
// -2 0 2
// -1 -1 2
// -1 0 1