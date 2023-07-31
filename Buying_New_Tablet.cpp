#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n, w, h, p;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> b;
        int size = 0;
        for (i = 0; i < n; i++)
        {
            cin >> w >> h >> p;
            if (p <= b)
            {
                if (size < w * h)
                    size = w * h;
            }
        }
        if (size == 0)
            cout << "no tablet" << endl;
        else
            cout << size << endl;
    }

    return 0;
}