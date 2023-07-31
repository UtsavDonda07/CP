//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end());

        int z = 0;

        for (int i = 1; i < n; i++)
        {
            if (intervals[i][0] > intervals[z][0] && intervals[i][0] < intervals[z][1])
            {
                intervals[z][1] = max(intervals[z][1], intervals[i][1]);

                vector<int> v;
                v.push_back(intervals[z][0]);
                v.push_back(intervals[z][1]);
// dont push every time
// when change value of z then before push
// this error
                if (find(ans.begin(), ans.end(), v) == ans.end())
                    ans.push_back(v);
            }
            else
            {
                if (ans.empty())
                {
                    vector<int> v;
                    v.push_back(intervals[z][0]);
                    v.push_back(intervals[z][1]);

                    ans.push_back(v);
                }
                vector<int> v;
                v.push_back(intervals[i][0]);
                v.push_back(intervals[i][1]);

                ans.push_back(v);
                z = i;
            }
        }
        // print list

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<vector<int>> Intervals(n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            Intervals[i].push_back(x);
            Intervals[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.overlappedInterval(Intervals);
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends