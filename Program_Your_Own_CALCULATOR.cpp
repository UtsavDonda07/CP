#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b,ans;
    char c;
   
    cin >> a;
    cin >> b;
    cin >> c;

    if (c == '+'){
        ans=a+b;
         cout << ans << endl;
    }
       
    else if (c == '-')
       {
           ans=a-b;
         cout << ans << endl;
       }

    else if (c == '*')
       {
           ans=a*b;
         cout << ans << endl;
       }
    else if (c == '/')
   {
           ans=a/b;
         printf("%.1lf\n", ans);
       }

    return 0;
}