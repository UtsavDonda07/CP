//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int smallestSubWithSum(int arr[], int n, int x)
    {
        int i = 0, j = 1, ans, cur = arr[i];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > x)
            {
                return 1;
            }
            else if (cur < x)
            {
                cur += arr[j];
                j++;
            }
            else
            {
                return j - i;
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.smallestSubWithSum(a, n, x) << endl;
    }
    return 0;
}
// } Driver Code Ends