#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, z, m, n;
    int t, i, count = 0;
    string str;
    cin >> t;
    long long int sum = 0, s1 = 0, s2 = 0, s3 = 0;
    while (t--)
    {
        cin >> x >> y >> z; 
        s1 = x + s1;
        s2 = y + s2;
        s3 = z + s3;
    }
    if (s1 == 0 && s2 == 0 && s3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}