#include <bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define LL          long long
#define FOR(i,n)    for(int i=0;i<n;i++)
#define rep(i,k,n)  for(int i=k; i<n; i++)
#define repp(i,k,n) for(int i=k; i<=n; i++)

int main(){
    BOOST;
    int t;
    int length;
    string str;
    cin>>t;
    
    for(int i=1; i<=t; i++){
        string temp_number;
        string temp_sign;
        cin>>length;
        cin>>str;
        for(int j=0; j<length; j++){
            if(str[j]!='+' && str[j]!='-'){
                temp_number=temp_number+str[j];
            }
            else{
                temp_sign=temp_sign+str[j];
            }
        }
        sort(temp_number.rbegin(), temp_number.rend());
        sort(temp_sign.begin(), temp_sign.end());
        // cout<<temp_number << endl;
        // cout<<temp_sign << endl;
        for(int k=0; k<(temp_number.length()-temp_sign.length() - 1); k++){
            cout<<temp_number[k];
        }
        int x = temp_number.length()-temp_sign.length() - 1, y = 0;
        int cnt = 0;
        while(x < temp_number.size() || y < temp_sign.size()) {
            if(cnt % 2 == 0) {
                cout << temp_number[x++];
            }else {
                cout << temp_sign[y++];
            }
            cnt++;
        }
        cout << endl;
    }
    
   // cout<<5;
}