//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        unordered_map<int, int> map;
        vector<int> v;

        int a = 0, b = 0, x = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for (auto i = map.begin(); i != map.end(); i++)
        {
            if (i->second == 1)
            {
                v.push_back(i->first);
            }
        }
        sort(v.begin(), v.end());
            // for (int i = 0; i < nums.size(); i++)
            // {
            //     x = x ^ nums[i];
            // }
            // cout << "x= " << x << endl;
            // for (int i = 0; i < nums.size(); i++)
            // {
            //     if (nums[i] % 2 == 0)
            //     {
            //         a = a ^ nums[i];
            //         cout << i << " a = " << a << endl;
            //     }
            //     else
            //     {
            //         b = b ^ nums[i];
            //         cout << i << " b = " << b << endl;
            //         // cout << b << " =b " << endl;
            //         // cout<<<<endl;
            //     }
            // }
            // v.push_back(a);
            // v.push_back(b);
            return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n + 2);
        for (int i = 0; i < 2 * n + 2; i++)
            cin >> v[i];
        Solution ob;
        vector<int> ans = ob.singleNumber(v);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends