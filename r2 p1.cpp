#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t, i;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n], ans = 0;
        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[i] = -1;
                    break;
                }
            }
        }

        int count2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[n - i - 1] != -1)
            {
                count2++;
            }
            else
                break;
        }
        cout << n - count2 << endl;
    }
    return 0;
}