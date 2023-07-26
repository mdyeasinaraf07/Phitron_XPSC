#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, m;
    cin>> n >> m;
    if(n == m){
        if(n & 1){
            cout<< "CHEF"<< endl;
        }
        else{
            cout<< "CHEFINA"<< endl;
        }
    }
    else if(n < m){
        m -= n;
        if(m == 1){
            if(n & 1){
                cout<< "CHEF"<< endl;
            }
            else{
                cout<< "CHEFINA"<< endl;
            }
        }
        else{
            cout<< "CHEFINA"<< endl;
        }
    }
    else{
        n -= m;
        if(n == 1){
            if(m & 1){
                cout<< "CHEF"<< endl;
            }
            else{
                cout<< "CHEFINA"<< endl;
            }
        }
        else{
            cout<< "CHEF"<< endl;
        }
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
