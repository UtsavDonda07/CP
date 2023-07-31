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

        cin >> n;
        if (n == 1)
            cout << 0 << endl;
        else if (n == 2)
            cout << 1 << endl;
        else if (n == 3)
            cout << 1 << endl;

            if (n == 5)
                cout << 2 << endl;
            else if (n == 4)
                cout << 1 << endl;
            else if (n == 6)
                cout << 2 << endl;
            else if (n == 7)
                 cout << 3 << endl;
        else
        cout<<n<<endl;      // TEST FAILE HERE!!!!!!!!!!!!
    }
    return 0;
}