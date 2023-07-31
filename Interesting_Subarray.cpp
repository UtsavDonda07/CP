#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t, i;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        bool flag = false;

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 0)
            {
                flag = true;
            }
        }

        long long int max1 = *max_element(arr, arr + n);
        long long int min = *min_element(arr, arr + n);
        long long int a = min * min;
        if (min > 0)
        {
            min = min * min;
        }
        else
        {
            if (flag == true)
            {
                min = min * max1;
            }
            else
            {
                if (flag == true)
                {
                    min = min * min;
                }
                else
                {
                    min = max1 * max1;
                }
            }
        }

        max1 = std::max(max1 * max1, a);
        cout << min << " " << max1 << endl;
    }
    return 0;
}