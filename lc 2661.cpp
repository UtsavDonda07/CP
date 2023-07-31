#include <bits/stdc++.h>
using namespace std;

int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
{
    unordered_map<int, bool> mpr, mpc;
    vector<pair<int, bool>> vr, vc;
    int r = mat.size(), c = mat[0].size();

    // row wise check push vr

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            vr.push_back({mat[i][j], false});
        }
    }

    // column wise check

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            vc.push_back({mat[i][j], false});
        }
    }

    // traverse arr and check vr and vc value true
    bool flagr = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (flagr == true)
        {
            break;
        }
        for (int j = 0; j < vr.size(); j++)
        {
        }
    }

    // print vr and vc
    for (int i = 0; i < vr.size(); i++)
    {
        cout << vr[i].first << " " << vr[i].second << "\n";
    }
    cout << endl;
    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i].first << " " << vc[i].second << "\n";
    }
    cout << endl;

    return 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    vector<vector<int>> mat;
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < c; j++)
        {
            int t;
            cin >> t;
            tmp.push_back(t);
        }
        mat.push_back(tmp);
    }

    cout << firstCompleteIndex(arr, mat) << "\n";

    return 0;
}