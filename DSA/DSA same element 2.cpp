#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int A[n1], B[n2], C[n3];

    for (int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < n3; i++)
    {
        cin >> C[i];
    }

    unordered_map<int, int> m1, m2, m3;

    vector<int> v;

    for (int i = 0; i < n1; i++)
    {
        m1[A[i]]++;
    }
    for (int i = 0; i < n2; i++)
        m2[B[i]]++;

    for (int i = 0; i < n3; i++)
        m3[C[i]]++;

    for (int i = 0; i < n1; i++)
    {
        if (m1[A[i]] && m3[A[i]] && m2[A[i]])
            v.push_back(A[i]);
        m1[A[i]] = 0;
    }
    for (auto x : v)
    cout<<x<<" ";

        return 0;
}