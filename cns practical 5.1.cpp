#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (__gcd(a, b) != 1)
    {
        cout << "not found" << endl;
    }
    else
    {
        int q, r1 = a, r2 = b, r, t1 = 0, t2 = 1, t;

        while (r1 != 1)
        {
            q = r1 / r2;
            r = r1 % r2;
            t = t1 - q * t2;

            r1 = r2;
            r2 = r;
            t1 = t2;
            t2 = t;
        }
        if (t1 < 0)
            return t1 + max(a, b);
        else
            return t1;
    }
}

int main()
{
    int i, a, b;

    cin >> a >> b;
    int z = gcd(a, b);
    cout << "multiplicative inverse of " << a << " modulo " << b << " is " << z << endl;

    return 0;
}