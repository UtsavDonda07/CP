#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // i want to find max element for range in O(1)

        int inx = 0;
        int m = a[0];
        int count = 0;
        int val = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= n - 1 - i)
            {
                break;
            }
            if (m == arr[i])
            {
                count++;
                m = *max_element(arr[i + 1], arr[i] + i);
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
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends