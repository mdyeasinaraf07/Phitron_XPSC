#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, x;
    cin>> n >> x;
    if(x <= 0){
        ll tmp = abs(x) + 1;
        if(n < tmp){
            cout<< -1<< endl;
        }
        else{
            ll i = 1;
            while(i <= tmp){
                cout<< '-';
                i++;
            }
            while(i <= n){
                cout<< '*';
                i++;
            }
            cout<< endl;
        }
    }
    else{
        if(n < x - 1){
            cout<< -1<< endl;
        }
        else{
            ll i = 1;
            while(i < x){
                cout<< '+';
                i++;
            }
            while(i <= n){
                cout<< '*';
                i++;
            }
            cout<< endl;
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
