#include <bits/stdc++.h>
using namespace std;

string encrypt(string pt, string key, string key_small)
{

    for (int i = 0; i < pt.length(); i++)
    {
        if (pt[i] >= 'A' && pt[i] <= 'Z')
        {

            pt[i] = key[pt[i] - 'A'];
        }
        else if (pt[i] >= 'a' && pt[i] <= 'z')
        {
            pt[i] = key_small[pt[i] - 'a'];
        }
        else
        {
            pt[i] = pt[i];
        }
    }
    return pt;
}
string decrypt(string ct, string key, string key_small)
{
    for (int i = 0; i < ct.length(); i++)
    {
        if (ct[i] >= 'A' && ct[i] <= 'Z')
        {

            for (int j = 0; j < 26; j++)
            {
                if (key[j] == ct[i])
                {
                    ct[i] = j + 'A';
                    break;
                }
            }
        }
        else if (ct[i] >= 'a' && ct[i] <= 'z')
        {

            for (int k = 0; k < 26; k++)
            {
                if (key_small[k] == ct[i])
                {
                    ct[i] = k + 'a';
                    break;
                }
            }
        }
        else
        {
            ct[i] = ct[i];
        }
    }
    return ct;
}
int main()
{
    string key = "FMERTYUIOPASDQGHJKLZXCVBNW";
    string key_small = "fmertyuiopasdqghjklzxcvbnw";
    string pt;
    cout << "Enter string :-" << endl;
    cin >> pt;
    string ct = encrypt(pt, key, key_small);
    cout << "Encrypted text:" << ct << endl;

    cout << "Decrypted text:" << decrypt(ct, key, key_small) << endl;

    return 0;
}
