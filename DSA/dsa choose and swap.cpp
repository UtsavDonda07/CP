//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string chooseandswap(string a)
    {
        int n = a.length();
        int i, j;
        bool flag = false;
        char w, s;
        std::set<char> s1;
        for (i = 0; i < n; i++)
        {
            s1.insert(a[i]);
        }

        // print s1
         for (auto& str : s1) {
        std::cout << str << ' ';
    }

        for (i = 0; i < n - 1; i++)
        {
            s1.erase(a[i]);
            if (a[i] > a[i + 1])
            {
                flag = true;
                w = a[i];
                break;
            }
        }

        if (flag == false)
        {
            return a;
        }
        else
        {
            cout<<w<<endl;
            cout<<*s1.begin()<<endl;
            for (i = 0; i < n; i++)
            {
                if (a[i] == w)
                {
                    // insert the first element of set in a[i]
                    s = *s1.begin();
                    a[i] = s;
                }
                else if (a[i] == s)
                {
                    a[i] = w;
                }
            }
            return a;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        cout << obj.chooseandswap(a) << endl;
    }
    return 0;
}

// } Driver Code Ends