#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, x, y, m, n;
  int t, i, count = 0;

  cin >> t;
  while (t--)
  {
    cin >> n;
    string str;
    cin >> str;
    // step 1 swap
    if (n % 2 == 1)
    {
      n = n - 1;
    }

    for (i = 0; i < n; i++)
    {
      char c = str[i];
      str[i] = str[i + 1];
      str[i + 1] = c;
      i++;
    }

    // step 2 use ascii value and change character
    if (n % 2 == 1)
    {
      n = n + 1;
    }
    for (i = 0; i < n + 1; i++)
    {
      int ascii = str[i];
      int f = ascii + 25 - abs(ascii - 97) * 2;

      char x = f;
      str[i] = x;
    }
    cout << str << endl;
  }

  return 0;
}