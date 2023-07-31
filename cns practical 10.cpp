#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void decprition(string ct, int key)
{
    char rail[key][ct.length()] = {'\n'};

    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < ct.length(); j++)
        {
            rail[i][j] = '*';
        }
    }
    bool direction_down;
    int row = 0, col = 0;
    for (int i = 0; i < ct.length(); i++)
    {
        if (row == 0)
        {
            direction_down = true;
        }
        if (row == (key - 1))
        {
            direction_down = false;
        }
        rail[row][col++] = '1';
        if (direction_down == true)
        {
            row++;
        }
        if (direction_down == false)
        {
            row--;
        }
    }
    int index = 0;
    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < ct.length(); j++)
        {
            if (rail[i][j] == '1')
            {
                rail[i][j] = ct[index++];
            }
        }
    }
    string pt;
    for (int i = 0; i < ct.length(); i++)
    {
        for (int j = 0; j < key; j++)
        {
            if (rail[j][i] != '*')
            {
                pt.push_back(rail[j][i]);
            }
        }
    }
    cout << endl
         << "Decrypted Message is : " << pt;
}
void encryption(string pt, int key)
{
    char rail[key][pt.length()] = {'\n'};
    // Fill the full matrix with '\n'
    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < pt.length(); j++)
        {
            rail[i][j] = '*';
        }
    }
    bool direction_down;
    int row = 0, col = 0;
    // Fill the matrix with plane text
    for (int i = 0; i < pt.length(); i++)
    {
        if (row == 0)
        {
            direction_down = true;
        }
        if (row == (key - 1))
        {
            direction_down = false;
        }
        rail[row][col++] = pt[i];
        if (direction_down == true)
        {
            row++;
        }
        if (direction_down == false)
        {
            row--;
        }
    }
    string ct;
    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < pt.length(); j++)
        {
            if (rail[i][j] != '*')
            {
                ct.push_back(rail[i][j]);
            }
        }
    }
    cout << "Cipher text is: " << ct;
    decprition(ct, key);
}
int main()
{
    string pt;
    cout << "Enter Plane Text : ";
    cin >> pt;
    int key;
    cout << "Enter the key : ";
    cin >> key;
    encryption(pt, key);
}