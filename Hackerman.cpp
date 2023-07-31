#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, n, t, i, j;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int sum = a + b;
        bool flag = false;
        for (int i = 2; i * i <= sum; i++)
        {
            if (sum % i == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }

    return 0;
}