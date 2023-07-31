#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, n, t, i, x, j;
    bool flag = false;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        long long int income = pow(2, x);

        for (int i = 0; i < n; i++)
        {
            float e = income - income * 0.5;
            income = income - income * 0.5;
        }

        cout << income << endl;
    }

    return 0;
}