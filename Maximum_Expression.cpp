#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;

    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;
        string ans;

        int arr[n];
        int j = 0;
        count = 0;
        int countN = 0;

        for (i = 0; i < n; i++)
        {
            if (str[i] == '+')
            {
                count++;
            }
            else if (str[i] == '-')
            {
                countN++;
            }
            else
            {
                arr[j] = int(str[i] - '0');
                j++;
            }
        }
        int turn = 1;
        int temp = 0;
        sort(arr, arr + j, greater<int>());

        if (count == 0 && countN == 0)
        {
            for (int i = 0; i < j; i++)
            {
                ans += char(arr[i] + '0') ;
            }
            cout << ans << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                if (i < j - count - countN)
                {

                    ans += (arr[i] + '0');
                }

                else if (count > 0)
                {
                    if (turn)
                    {
                        ans += ('+');
                        count--;
                        turn = 0;
                    }
                    else
                    {
                        ans += (arr[j - count - countN + temp - 1] + '0');
                        turn = 1;
                        temp++;
                    }
                }

                else if (countN > 0)
                {
                    if (turn)
                    {
                        ans += ("-");
                        countN--;
                        turn = 0;
                    }
                    else
                    {
                        ans += (arr[j - count - countN + temp - 1] + '0');
                        turn = 1;
                        temp++;
                    }
                }
            }
            ans += (arr[j - 1] + '0');

            cout << ans << endl;
        }
    }
    return 0;
}