#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t, i;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;
        long long int count = 0;

        for (i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                break;
            }
            else
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
