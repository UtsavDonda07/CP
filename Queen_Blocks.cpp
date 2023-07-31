#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, x, y, z, m, n;
    int t, i, count = 0;
    cin >> n >> x;
    vector<int> arr;

    for (i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());

    int dif, l = 0, r = n - 1;
    bool flag = false;
    for (l = 0; l < n; l++)
    {
        for (r = n - 1; r > 0; r--)
        {
            dif = x - (arr[l] + arr[r]);

            std::vector<int>::iterator it;

            it = std::find(arr.begin(), arr.end(), dif);
            if (it != arr.end())
            {
                // std::cout << "Element " << dif << l << " " << r << endl;
                x=arr[l];
                y=arr[r];
                z=dif;
                flag = true;
            }
            if (flag == true)
            {
                break;
            }
        }
    }
    cout << x << " " << y << " " <<z;
    return 0;
}