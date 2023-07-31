#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, j, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int arr[n][n];
        int count = 0;
        for (i = 0; i < n; i++)
        {

            int s;
            if (i % 2 == 0)
            {
                s = count + 1;
            }
            else
            {

                s = n * n - count;
                count++;
            }

            for (j = 0; j < n; j++)
            {
                if (i % 2 == 0)
                {
                    cout << s << " ";
                    s = s + 2;
                }
                else
                {
                    cout << s << " ";
                    s = s - 2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}