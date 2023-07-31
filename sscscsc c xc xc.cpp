#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int cnt1=0;
        int cnt2=0;
        
        if(b>a){
            for(int i=0;;i++){
                a= a+b;
                cnt1++;
                if(a>n){
                    break;

                }

            }
            cout<<cnt1<<endl;
        }
        else{
            for(int i=0;;i++){
                b=b+a;
                
                cnt2++;
                if(b>n){
                    break;

                }

            }
            cout<<cnt2<<endl;
        }
    }
    return 0;
}