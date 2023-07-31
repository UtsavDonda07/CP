#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, m, n;
    int t, i, count = 0;
    string str;
    cin >> str;
        char arr[100];
    for (i = 0; i < str.length(); i++)
    {
        arr[i]=str[i];
        if(int(str[i])>=65 && int(str[i])<=90){
            str[i]=int(str[i])+32;
            arr[i]=str[i];
        }
    }

    for (i = 0; i < arr.length(); i++)
    {
        if(int(arr[i])==97 || int(arr[i])==101 || int(arr[i])==105 || int(arr[i])==111 || int(arr[i])==117){
        
        }
    }
    // cout<<arr;

    return 0;
}