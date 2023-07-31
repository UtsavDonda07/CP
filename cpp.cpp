#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int total = 0;
    int m1 = 0, m2 = 0;
    vector<int> v;
    int a[2];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            v.push_back(m1);
            a[j] = m1;
            j++;
            i++;
            m1 = 0;
        }
        if (arr[i] >= 0)
        {
            m1 = m1 + arr[i];
        }

        total = total + arr[i];
    }
    v.push_back(m1);
   
        cout << std::max(total,*max_element(v.begin(), v.end()));

    return 0;
}