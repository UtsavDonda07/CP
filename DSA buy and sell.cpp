#include <bits/stdc++.h>
using namespace std;
class buy
{
public:
    bool flag = false;
    int value = 0;
};

int main()
{
    int n;

    cin >> n;
    int arr[n];
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    buy b = buy();

    // for (int i = 0; i < n - 1; i++)
    // {

    //     if ((arr[i] <= arr[i + 1]) && (b.flag == false))
    //     {
    //         // buy stock
    //         b.flag = true;
    //         b.value = arr[i];
    //     }
    //     else if ((arr[i] > arr[i + 1]) && (b.flag == true))
    //     {
    //         // sell stock
    //         total += arr[i] - b.value;
    //         cout<<total<<endl;
    //         b.flag = false;
    //     }
    //     if (i == n - 2 && (b.flag == true))
    //     {
    //         if (arr[i + 1] > b.value)
    //         {

    //             total += arr[i + 1] - b.value;
    //                cout<<total<<endl;
    //         }
    //         else
    //         {
    //             total += 0;
    //                cout<<total<<endl;
    //         }
    //     }
    // }
    // cout << total << endl;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1]) 
        {
            total += (arr[i] - arr[i - 1]);
        }
    }
    cout << total << endl;
    return 0;
}