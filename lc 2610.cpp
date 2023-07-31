#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {

        unordered_map<int, int> mp;
        vector<vector<int>> v;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;

        int max = 0;
        for (auto i : mp)
        {
            if (i.second > max)
                max = i.second;
        }

        for (int i = 0; i < max; i++)
        {
            vector<int> tmp;
            for (auto j : mp)
            {
                if (j.second > 0)
                {
                    tmp.push_back(j.first);
                    mp[j.first]--;
                }
            }
            v.push_back(tmp);
        }

               return v;
    }
};

int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    Solution ob;
    vector<vector<int>> ans = ob.findMatrix(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        // for (int j = 0; j < ans[i].size(); j++)
        // cout << ans[i][j] << " ";
        // cout << "\n";
    }

    return 0;
}