#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, m;
    cin>> n >> m;
    vector <ll> v(n + m);
    for(int i = 0; i < n + m; i++){
        cin>> v[i];
    }
    sort(v.begin(), v.end() - 1);
    reverse(v.begin(), v.end());
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
    }
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



