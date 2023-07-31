#include <bits/stdc++.h>
using namespace std;
long long countGood(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int count = 0;
    int j = 0;
    int ans = 0;

    mp[nums[i]] = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;

        count += mp[nums[i]] - 1;
        if (count >= k)
        {
            while (j < i && count >= k)
            {
                mp[nums[j]]--;
                 
            }
        }
    }
    return ans;
}
int main()
{
    return 0;
}