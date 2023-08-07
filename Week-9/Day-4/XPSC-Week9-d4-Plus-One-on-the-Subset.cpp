#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>> n;
    ll maxi = INT_MIN;
    ll mini = INT_MAX;
    for(ll i = 0; i < n; i++){
        ll tmp;
        cin>> tmp;
        maxi = max(maxi, tmp);
        mini = min(mini, tmp);
    }
    ll ans = maxi - mini;
    cout<< ans<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}

