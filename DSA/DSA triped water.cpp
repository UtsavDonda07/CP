#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int height = min(arr[0], arr[n - 1]);
    long long int width = n - 2;
    long long int hw = height * width;

    for (int i = 1; i < n - 1; i++)
    {
        hw -= arr[i];
    }
    if (hw < 0)
        cout << 0 << endl;

    else
        cout << hw << endl;

    return 0;
}