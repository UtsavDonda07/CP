//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n, int x)
{
    int a = -1, b = -1;
    vector<int> ans;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == x)
        {
            a = i;
            break;
        }
    }
    for (int i = n; i > n / 2; i--)
    {
        if (arr[i] == x)
        {
            b = i;
            break;
        }
    }
    if (a == -1 || b == -1)
    {
        if (a != -1)
            b = a;
        else
            a = b;
    }
    ans.push_back(a);
    ans.push_back(b);
    sort(ans.begin(), ans.end());
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends