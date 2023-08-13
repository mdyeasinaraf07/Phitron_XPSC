#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>> n;
    vector <ll> v(n);
    for(ll i = 0; i < n; i++){
        cin>> v[i];
    }
    ll m;
    cin>> m;
    for(ll i = 0; i < m; i++){
        ll tmp;
        cin>> tmp;
        auto s_it = lower_bound(v.begin(), v.end(), tmp);
        ll idx1 = s_it - v.begin();
        if(idx1 - 1 < 0){
            cout<< "X ";
        }
        else{
            cout<< v[idx1 - 1]<< " ";
        }
        auto h_it = upper_bound(v.begin(), v.end(), tmp);
        ll idx2 = h_it - v.begin();
        if(idx2 == n){
            cout<< "x"<< endl;
        }
        else{
            cout<< v[idx2]<< endl;
        }
    }
}

int main(){
    solve();

    return 0;
}

