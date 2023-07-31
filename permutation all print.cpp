#include <bits/stdc++.h>
using namespace std;

//  Time Complexity O(2^n)

void powerset(int s[], int i, int cur, int n)
{
    if (i == n)
    {
        cout << cur << endl;
        return;
    }
    powerset(s, i + 1, cur + s[i], n);
    powerset(s, i + 1, cur, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    powerset(arr, 0, 0, n);
    return 0;
}