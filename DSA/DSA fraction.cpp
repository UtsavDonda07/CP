//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution
{
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {

        double r[n];

        vector<pair<double, pair<int, int>>> v;

        for (int i = 0; i < n; i++)
        {
            r[i] = (double)arr[i].value / (double)arr[i].weight;
            v.push_back({r[i], {arr[i].value, arr[i].weight}});
        }
        sort(v.begin(), v.end(), greater<pair<double, pair<int, int>>>());

        double ans = 0;
        double sw = W;

        for (int i = 0; i < n; i++)
        {

            if (sw == 0)
                break;

            if (sw >= v[i].second.second)
            {
                ans += v[i].second.first;
                sw -= v[i].second.second;
            }
            else
            {

                double z = (sw / v[i].second.second);

                ans += z * v[i].second.first;
                break;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(2) << fixed;
    while (t--)
    {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends