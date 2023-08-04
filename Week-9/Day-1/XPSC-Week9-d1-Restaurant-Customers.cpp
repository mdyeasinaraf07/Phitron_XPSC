#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>> n;
    map <ll, ll> mp;
    for(ll i = 0; i < n; i++){
        ll tmp1, tmp2;
        cin>> tmp1 >> tmp2;
        mp[tmp1]++;
        mp[tmp2]--;
    }
    int sum = 0, ans = 0;
    for(auto it: mp){
        sum += it.second;
        ans = max(sum, ans);
    }
    cout<< ans<< endl;
}

int main(){
    solve();

    return 0;
}
