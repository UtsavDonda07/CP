#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n, k, l, d;
    int t, i, count = 0;

    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;

    int arr[d];

    for (i = 0; i < d; i++)
    {
        arr[i]=i+1;
    }
    
    for (i = 0; i < d; i++)
    {
        if(arr[i]%k ==0 || arr[i]%l ==0 || arr[i]%m ==0 || arr[i]%n == 0){
            arr[i]
        }

    }

    return 0;
}