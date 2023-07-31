//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            pair<int, int> p;
            p.first = end[i];
            p.second = start[i];
            v.push_back(p);
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            int temp = v[i].first;
            v[i].first = v[i].second;
            v[i].second = temp;
        }

        // for (int i = 0; i < n; i++)
        //     cout << v[i].first << " " << v[i].second << endl;

        int pointer = 0;
        int count = 1;

        for (int i = 1; i < n; i++)
        {
            if (v[i].first > v[pointer].second)
            {
                count++;
                pointer = i;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends