#include <bits/stdc++.h>
using namespace std;

//  Time Complexity O(n^n!)
string swap(string &s, int a, int b)
{
    char temp = s[a];
    s[a] = s[b];
    s[b] = temp;
    return s;
}

void permute(string s, int l, int r)
{
    if (l == r)
    {
        cout << s << endl;
        return;
    }
    for (int i = l; i <= r; i++)
    {
        s = swap(s, l, i);
        permute(s, l + 1, r);
        s = swap(s, l, i);
    }
}
 
int main()
{
    string str;
    cin >> str;
    
    int n = str.length();
    n--;
    permute(str, 0, n);
    return 0;
}