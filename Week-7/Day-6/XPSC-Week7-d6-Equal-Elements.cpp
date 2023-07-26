#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>> n;
    map <ll, int> mp;
    for(ll i = 0; i < n; i++){
        ll tmp;
        cin>> tmp;
        mp[tmp] ++;
    }
    int maxi = 0;
    int sum = 0;
    for(auto it: mp){
        maxi = max(maxi , it.second);
        sum += it.second;
    }
    sum -= maxi;
    cout<< sum<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}


