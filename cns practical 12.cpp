#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int t;
    while (1)
    {
        t = a % b;
        if (t == 0)
            return b;
        a = b;
        b = t;
    }
}
int main()
{
    string msg = "";
    cout << "Original Message: ";
    cin >> msg;
    vector<double> a1, a2, a3;
    double p = 13;
    double q = 11;
    double n = p * q;
    double track;
    double phi = (p - 1) * (q - 1);
    double e = 7;
    while (e < phi)
    {
        track = gcd(e, phi);
        if (track == 1)
            break;
        else
            e++;
    }
    double d1 = 1 / e;
    double d = fmod(d1, phi);
    for (int i = 0; i < msg.length(); i++)
    {
        double message = double(msg[i]);
        a3.push_back(message);
        double c = pow(message, e);
        double m = pow(c, d);
        c = fmod(c, n);
        m = fmod(m, n);
        a1.push_back(c);
        a2.push_back(m);
    }
    cout << "\nEncrypted Message: ";
    for (int i = 0; i < a1.size(); i++)
        cout << char(a1.at(i));
    cout << "\nDecrypted Message: ";
    for (int i = 0; i < a2.size(); i++)
        cout << char(a2.at(i) + 1);
    return 0;
}
