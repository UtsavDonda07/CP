//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> search(string pat, string txt)
    {
        vector<int> ans;
        int n = pat.length();

        for (int i = 0; i < txt.length() - n + 1; i++)
        {
            string temp;
            int count = 0;
            for (int j = i; count != n; j++)
            {
                 if(pat[count]!=txt[j])
                break;
                
                temp.push_back(txt[j]);
                count++;
            }

            if (temp == pat)
            {
                ans.push_back(i + 1);
            }
        }
        if (ans.size() == 0)
            ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends