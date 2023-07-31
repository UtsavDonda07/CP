#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        vector <int> res;
        res.push_back(arr[0]);
        int count=1;
        for (i = 1; i < n; i++)
        {
            if(arr[i]==res.back()){
                count++;
            }
            else{
                res.push_back(arr[i]);
            }
        }
        cout<<count<<endl;
       int same=n-res.size()+1;
       int dif=n-same;
        if (same-1<=dif)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}