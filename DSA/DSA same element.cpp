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

    vector<int> v;
    int p1 = 0, p2 = 0, p3 = 0;
    for (int i = 0;; i++)
    {
        if (p1 == n1 || p2 == n2 || p3 == n3)
        {
            break;
        }
        if (A[p1] == B[p2] && B[p2] == C[p3])
        {
            v.push_back(A[p1]);
            p1++;
            p2++;
            p3++;
        }
        else
        {
            if (A[p1] < B[p2])
            {
                p1++;
            }

           else if (B[p2] < C[p3])
            {
                p2++;
            }
           else
            {
                p3++;
            }
        }
        int x = A[p1 - 1];
        int y = B[p2 - 1];
        int z = C[p3 - 1];
        while (x == A[p1])
            p1++;
        while (y == B[p2])
            p2++;
        while (z == C[p3])
            p3++;
    }
    for(auto x:v)
    cout<<x<<" ";

    return 0;
}