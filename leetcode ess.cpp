#include <bits/stdc++.h>
using namespace std;
int captureForts(vector<int> &forts)
{
    int n = forts.size();
    int count = 0,ans=0;
    bool flag1 = false, flag2 = false;
    for (int i = 0; i < n; i++)
    {   
        if(forts[i] ==-1)
        {
           ans=max(ans,count);
        }
        if (forts[i] == 1)
        {
            flag1 = true;
        }

        if(flag1 && forts[i] == 0)
        {
           count++;
        }

    }
}
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
    }

    return 0;
}