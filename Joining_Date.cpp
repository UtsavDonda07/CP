#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, k, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int Tpart = ceil(n * 1.0 / 5);

        int Cpart = (k / 5) + 1;
        if (k % 5 == 0)
        {
            Cpart = Cpart - 1;
        }
        cout << Tpart - Cpart << endl;
    }

    return 0;
}