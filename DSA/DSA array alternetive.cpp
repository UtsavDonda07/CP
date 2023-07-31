#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;

    cin >> n;
   long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   long long int i = 0;
   long long int j = n - 1;
    for (long long int k = 0; k < n; k++)
    {
        if (k % 2 == 0)
        {
            cout << arr[j] << " ";
            j--;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
        }
    }

    return 0;
}