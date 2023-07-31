//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    class Node
    {

    public:
        int data;
        Node *left;
        Node *right;

        Node(int data)
        {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

    void preorder(Node *root, vector<string> &ans, string s)
    {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(s);
            return;
        }

        preorder(root->left, ans, s + "0");
        preorder(root->right, ans, s + "1");
    }

    vector<string> huffmanCodes(string S, vector<int> f, int N)
    {
        vector<pair<int, char>> v;
        for (int i = 0; i < N; i++)
        {
            v.push_back({f[i], S[i]});
        }

        sort(v.begin(), v.end());

        if (N == 1)
        {
            vector<string> ans;
            ans.push_back("0");
            return ans;
        }
        else
        {

            Node *root = new Node(0);
            Node *left = new Node(v[0].first);
            Node *right = new Node(v[1].first);
            // assign the root left and right child
            root->left = left;
            root->right = right;
            root->data = left->data + right->data;
            // cout << root->data << endl;
            for (int i = 2; i < N; i++)
            {
                left = new Node(v[i].first);
                right = root;

                Node *tmp = new Node(0);

                tmp->left = left;
                tmp->right = right;
                tmp->data = left->data + right->data;
                root = tmp;
                // cout << root->data << endl;
            }

            vector<string> ans;

            preorder(root, ans, "");
            return ans;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        int N = S.length();
        vector<int> f(N);
        for (int i = 0; i < N; i++)
        {
            cin >> f[i];
        }
        Solution ob;
        vector<string> ans = ob.huffmanCodes(S, f, N);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends