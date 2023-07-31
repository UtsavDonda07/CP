#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, i, count = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;
        char arr[str.length()];
        for (i = 0; i < str.length(); i++)
        {
            arr[i] = str[i];
        }
        string temp;
        char a = arr[0];
        char z = arr[str.length() - 1];
        arr[0] = z;
        arr[str.length() - 1] = a;

        for (i = 0; i < str.length(); i++)
        {
            temp=arr[i+1];
            arr[i+1] = arr[i];
        }
        
       

    }

    return 0;
}