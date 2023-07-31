#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n, t;

    cin >> t;
    while (t--)
    {
        bool flag = false;
        cin >> a >> b;
        int min = std::min(a, b);
        int max = std::max(a, b);
        for (int i = 0; min < max; i++)
        {
            min = min * 2;
            if (min == max)
            {
                flag = true;
            }
        }
        if (flag == true || min == max)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}