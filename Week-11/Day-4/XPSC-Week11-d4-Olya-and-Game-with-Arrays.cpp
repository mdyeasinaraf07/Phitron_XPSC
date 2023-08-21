#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>> n;
    ll mini = INT_MAX;
    vector <ll> a;
    for(int i = 0; i < n; i++){
        int m;
        cin>> m;
        vector <ll> v(m);
        for(int i = 0; i < m; i++){
            cin>> v[i];
        }
        sort(v.begin(), v.end());
        a.push_back(v[1]);
        mini = min(mini, v[0]);
    }
    ll sum = 0;
    sort(a.begin(), a.end());
    for(int i = 1; i < a.size(); i++){
        sum += a[i];
    }
    sum += mini;
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
