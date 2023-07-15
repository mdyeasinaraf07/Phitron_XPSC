#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k;
    cin>> n >> k;
    if(k > n / 2){
        cout<< "NO"<< endl;
    }
    else{
        ll even, odd;
        even = n / 2;
        if(n & 1){
            odd = (n / 2) + 1;
        }
        else{
            odd = n / 2;
        }
        even -= k;
        odd -= k;
        if(odd & 1){
            cout<< "NO"<< endl;
        }
        else{
            cout<< "YES"<< endl;
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
