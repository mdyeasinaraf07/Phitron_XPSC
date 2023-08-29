#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k;
    cin>> n >> k;
    set <ll> s;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            s.insert(i);
            s.insert(n / i);
        }
    }
    if(s.size() < k){
        cout<< -1<< endl;
    }
    else{
        int i = 1;
        for(auto it: s){
            if(i == k){
                cout<< it<< endl;
            }
            i++;
        }
    }
}

int main(){
    solve();

    return 0;
}
