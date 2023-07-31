#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    bool flag = true;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str1[i + 1])
        {
            if (str2[i] != str2[i + 1])
            {
                flag = false;
            }
        }
        else
        {
            if (str2[i] == str2[i + 1])
            {
                flag = false;
            }
        }
    }
    cout << flag << endl;
return 0;
}