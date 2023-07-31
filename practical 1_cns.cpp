#include <bits/stdc++.h>
using namespace std;

string encription(string str, int key)
{
    char arr[str.length()];
    string s = "";

    for (int i = 0; i < str.length(); i++)
    {
        arr[i] = str[i] + key;
        s = s + arr[i];
    }
    return s;
}

string decryption(string str, int key)
{
    char arr[str.length()];
    string d = "";

    for (int i = 0; i < str.length(); i++)
    {
        arr[i] = str[i] - key;
        d = d + arr[i];
    }
    return d;
}

int main()
{
    int n, i, key = 2;
    string str;
    cout << "Enter String : ";
    cin >> str;
    n = str.length();

    string en_str = encription(str, key);
    cout << "Encrypted string is " << en_str << endl;

    cout << "Decrypted string is " << decryption(en_str, key) << endl;

    return 0;
}