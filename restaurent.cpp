#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rs, q = 1;
    int total = 0;
    while (true)
    {
        cout << "1.dabeli Rs 20" << endl;
        cout << "2.vadapav Rs 25" << endl;
        cout << "3.khavsa Rs 30" << endl;
        cout << "4.alupuri Rs 15" << endl;
        cout << "5.dhosa Rs 80" << endl;
        cout << "6.mansurian Rs 90" << endl;
        cout << "10.Exit" << endl;

        cout << endl;
        cout << "choose item" << endl;
        cin >> n;
        if (n == 10)
        {
            break;
        }
        cout << "enter quantity " << endl;
        cin >> q;
        switch (n)
        {
        case 1:

            total = total + 20 * q;
            break;
        case 2:

            total = total + 25 * q;
            break;
        case 3:

            total = total + 30 * q;
            break;
        case 4:

            total = total + 15 * q;
            break;
        case 5:

            total = total + 80 * q;
            break;
        case 6:

            total = total + 90 * q;
            break;
        case 10:
            break;

        default:
            cout << "invalid Item" << endl;
            break;
        }
    }
    cout << "total bill " << total << endl;
    return 0;
}