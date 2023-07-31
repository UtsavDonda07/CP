#include <bits/stdc++.h>
using namespace std;

void powerset(string str, int i, string tmp)
{

    cout<<tmp<<endl;
    // if (i == str.length())
    // {
    //     for (int j = 0; j < tmp.length(); j++)
    //     {
    //         cout << tmp[i];
    //     }
    //     cout << endl;
    // }
    powerset(str, i++, tmp + str[i]);
    powerset(str, i++, tmp);
}
int main()
{
    powerset("abc", 0, "");

    return 0;
}