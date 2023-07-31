#include <bits/stdc++.h>
using namespace std;
string encrypt(string text, int shift)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = (text[i] + shift - 'A') % 26 + 'A';
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = (text[i] + shift - 'a') % 26 + 'a';
        }
        else
        {
            text[i] = text[i];
        }
    }
    return text;
}
string decrypt(string text, int shift)
{
    shift = shift % 26;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            if ((text[i] - shift - 65) < 0)
            {
                text[i] = (char)(26 + ((int)text[i] - shift - 65)) + 65;
            }
            else
            {
                text[i] = text[i] - shift;
            }
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            if ((text[i] - shift) < 97)
            {
                text[i] = (char)(26 + ((int)text[i] - shift - 97)) + 97;
            }
            else
            {
                text[i] = text[i] - shift;
            }
        }
        else
        {
            text[i] = text[i];
        }
    }
    return text;
}
int main()
{
    string str;
    cout << "enter string : ";
    cin >> str;
    int key;

    for (int i = 0; i <= 25; i++)
    {
        string enc_str = str;
        string dec_str = decrypt(enc_str, i);
        cout << "Decrypted string : " << dec_str << "  key is " << i << endl;
    }

    return 0;
}