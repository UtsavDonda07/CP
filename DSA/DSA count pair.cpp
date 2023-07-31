#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;

    cin >> n >> k;
    int arr[n], i = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int dif = k - arr[i];
        if (map.find(dif) != map.end())
        {
            int frq = map[dif];
            count += frq;
            if (arr[i] == dif)
                count--;
            map[arr[i]]--;
        }
    }
    cout << count << endl;

    return 0;
}