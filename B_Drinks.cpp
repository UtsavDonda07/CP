#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    double sum = 0;
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    std::cout << std::fixed << std::setprecision(12) << (sum * 1.0) / n << endl;

    return 0;
} 