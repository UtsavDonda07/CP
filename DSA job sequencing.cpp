//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include <bits/stdc++.h>
using namespace std;

// A structure to represent a job
struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

// } Driver Code Ends
/*
struct Job
{
    int id;	 // Job Id
    int dead; // Deadline of job
    int profit; // Profit if job is over before or on deadline
};
*/

class Solution
{
public:
    // Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {
        // print arr
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({arr[i].profit, arr[i].dead});
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());

        int dl[n + 1];
        for (int i = 0; i < n + 1; i++)
        {
            dl[i] = 0;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (dl[v[i].second] == 0)
            {
                dl[v[i].second] = v[i].first;
                count++;
            }
            else
            {
                // find next empty slot
                int j = v[i].second - 1;
                while (j > 0 && dl[j] != 0)
                {
                    j--;
                }
                if (j > 0)
                {
                    dl[j] = v[i].first;
                    count++;
                }
            }
        }

        int profit = 0;
        // sum of profit
        for (int i = 0; i < n + 1; i++)
        {
            profit += dl[i];
        }

        return {count, profit};
    }
};

//{ Driver Code Starts.
// Driver program to test methods
int main()
{
    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;
        Job arr[n];

        // adding id, deadline, profit
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            arr[i].id = x;
            arr[i].dead = y;
            arr[i].profit = z;
        }
        Solution ob;
        // function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends