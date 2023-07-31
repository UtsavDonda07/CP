#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int len = floor(log10(abs(a[i]))) + 1;
        int temp = a[i];
        int rev = 0;
        while (temp != 0)
        {
            // this is over thinking easy way to sol
            int mul = pow(10, len - 1);
            int rem = temp % 10;
            temp = temp / 10;
            // rev=rev*10+rem; no need no of char
            rev += rem * mul;
            len--;
        }
        if (rev != a[i])
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << 0 << endl;
    }
    else
        cout << 1 << endl;

    return 0;
}