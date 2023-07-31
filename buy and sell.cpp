#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t, i, count = 0;
    string str;

    cin >> n;
    int arr[n];
    int buy, sell;
    int ans[1][1];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = false;
    for (i = 1; i < n; i++)
    {
        if ((arr[i - 1] < arr[i]) && flag == false)
        {
            buy = i-1;
            flag=true;
        }
        if(arr[i - 1] > arr[i])
        {
            sell = i-1;
            cout << buy << " " << sell << endl;
            flag = false;
        }
      
    }

    return 0;
}