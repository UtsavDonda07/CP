#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int n, k, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long int arr[n];
        bool flag = false;
        vector<int> v;
        unordered_map<int, int> map;
        unordered_map<int, int> ary;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ary[arr[i]]++;
            if(arr[i]==k){
                flag=true;
            }
        }

        for (int i = 2; i < k; i++)
        {
            if (k % i == 0)
            {
                map[i]++;
            }
        }
        for (auto i = map.begin(); i != map.end(); i++)
        {
            if (ary.find(i->first)!=ary.end())
            {
                flag = true;
            }
            else{
                flag=false;
                break;
            }
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}