#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, n;

    cin >> t;
    while (t--)
    {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        if (b1 + b2 + b3 >= 2)
            cout << "Not now" << endl;
        else
            cout << "Water filling time" << endl;
    }

    return 0;
}