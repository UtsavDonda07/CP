#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t, i, count = 0;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        bool flag = false;
        int br = sqrt(n);
        float a;

        for (int b = 1; b <= br; b++)
        {
            a = (n - 2 * b) % (2 + b);

            if (a == 0 && n != 2 * b)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}