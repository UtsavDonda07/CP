#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    int ans=1;
    while(p>0)
    {
        if(p&1)
        {
            // p&1 is true when p is odd
            ans=ans*n;
        }
        n=n*n;
        p=p>>1;
    }
    cout<<ans;
    return 0;
}