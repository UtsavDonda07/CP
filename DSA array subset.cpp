#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    int a1[n];
    int a2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    int x = *max_element(a1, a1 + n);
    int y = *max_element(a2, a2 + m);
    int size = max(x, y) + 1;
    int map[size];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        map[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        map[a1[i]] = 1;
    }
    bool flag = false;
    for (int i = 0; i < m; i++)
    {

        if (map[a2[i]] == 0)
        {
            flag = true;
            cout << "No" << endl;
            break;
        }

        else
            map[a2[i]] = 2;
    }
    for (int i = 1; i < size; i++)
    {
        if (map[i] == 2)
            count++;
    }
    if (flag == false)
        cout << "Yes" << endl;

    return 0;
}