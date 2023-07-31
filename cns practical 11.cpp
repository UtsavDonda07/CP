#include <bits/stdc++.h>
using namespace std;
map<int, int> keyMap;
string encrypt(string pt, int rows, int cols)
{
    string cipher = "";
    int key[4], k = 0;
    char arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++, k++)
        {
            if (k >= pt.length())
                arr[i][j] = 'x';
            else
                arr[i][j] = pt[k];
        }
    }
    cout << "\nCipher Matrix: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j];
        cout << endl;
    }
    cout << "\nEnter Key(Space Separated): ";
    for (int i = 0; i < 4; i++)
        cin >> key[i];
    for (int i = 0; i < cols; i++)
        keyMap.insert({i, key[i]});
    for (auto itr = keyMap.begin(); itr != keyMap.end(); ++itr)
    {
        int j = itr->second;
        for (int i = 0; i < rows; i++)
        {
            cipher += arr[i][j - 1];
        }
    }
    cout << "\nEncrypted text: " << cipher << endl;
    return cipher;
}
string decrypt(string cipher, int rows, int cols)
{
    string dec = "";
    char arr[rows][cols];
    int k = 0;
    for (auto itr = keyMap.begin(); itr != keyMap.end(); ++itr)
    {
        int j = itr->second;
        for (int i = 0; i < rows; i++)
            arr[i][j - 1] = cipher[k++];
    }
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            dec += arr[i][j];
    }
    return dec;
}
int main()
{
    string pt, cipher, dec;
    int rows, cols;
    cout << "Enter the plain text : ";
    getline(cin, pt, '\n');
    cout << "Enter the row and cols : ";
    cin >> rows;
    cin >> cols;
    cipher = encrypt(pt, rows, cols);
    dec = decrypt(cipher, rows, cols);
    cout << "\nDecrypted Text: ";
    for (int i = 0; i < dec.length(); i++)
    {
        if (i > pt.length())
            break;
        cout << dec[i];
    }
    return 0;
}
