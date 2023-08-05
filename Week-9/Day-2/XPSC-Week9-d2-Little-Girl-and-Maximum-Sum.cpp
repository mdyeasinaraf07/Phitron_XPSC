#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, q;
    cin>> n >> q;
    priority_queue <ll> pq;
    for(ll i = 0; i < n; i++){
        ll tmp;
        cin>> tmp;
        pq.push(tmp);
    }
    vector <ll> v(n + 2);
    for(int i = 0; i < q; i++){
        int tmp1, tmp2;
        cin>> tmp1 >> tmp2;
        v[tmp1]++;
        v[tmp2 + 1]--;
    }
    for(ll i = 1; i <= n + 1; i++){
        v[i] += v[i - 1];
    }
    sort(v.begin(), v.end(), greater<ll>());
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        ll tmp = pq.top() * v[i];
        sum += tmp;
        pq.pop();
    }
    cout<< sum<< endl;
}

int main(){
    solve();

    return 0;
}
