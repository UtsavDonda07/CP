#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n, k;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        int no;
        bool flag = false;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            if (arr[i] - k < 0)
            {
                no=i+1;
                flag = true;
                break;
            }
            else{
                arr[i+1]=arr[i+1]+(arr[i]-k);
            }
        }
        if(flag==true)
        cout<<"NO "<<no<<endl;
        else
        cout<<"YES"<<endl;
    }

    return 0;
}