#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int fun_euler(int n)
{
    int count = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            count++;
    return count;
}

int main()
{
    int n;
    cin >> n;
    int ans = fun_euler(n);
    cout << ans << endl;
    return 0;
}
