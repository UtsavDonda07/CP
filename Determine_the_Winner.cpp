#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        int pa, pb, qa, qb;
        cin >> pa >> pb >> qa >> qb;
        int m1 = std::max(pa, pb);
        int m2 = std::max(qa, qb);
        if (m1 > m2)
            cout << "Q" << endl;
        else if (m1 < m2)
            cout << "P" << endl;
        else
            cout << "TIE" << endl;
    }

    return 0;
}