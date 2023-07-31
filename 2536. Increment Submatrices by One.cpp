#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &queries)
{

    vector<vector<int>> ans;
// vector<vector<int>> arr(n, vector<int>(n, 0));
    int arr[n][n];
    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < queries.size(); i++)
    {
        int row1 = queries[i][0];
        int col1 = queries[i][1];
        int row2 = queries[i][2];
        int col2 = queries[i][3];


    }
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            temp.push_back(arr[i][j]);
        }
        ans.push_back(temp);
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> queries;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        vector<int> temp;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);
        temp.push_back(d);
        queries.push_back(temp);
    }
    vector<vector<int>> ans = rangeAddQueries(n, queries);
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
            cout << ans[j][k] << " ";
        cout << endl;
    }
    cout << endl;

    return 0;
}