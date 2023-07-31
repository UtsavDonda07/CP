#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x >> y;

        float chef = a / (x * 1.0);
        float chefina = b / (y * 1.0);
        if (chef < chefina)
            cout << "Chef" << endl;
        else if (chef > chefina)
            cout << "Chefina" << endl;
        else
            cout << "Both" << endl;
    }
    return 0;
}