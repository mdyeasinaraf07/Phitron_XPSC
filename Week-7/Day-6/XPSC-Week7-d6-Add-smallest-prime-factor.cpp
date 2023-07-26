#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, m;
    cin>> n >> m;
    int prime;
    if(n % 2 == 0){
        prime = 2;
    }
    else if(n % 3 == 0){
        prime = 3;
    }
    else{
        prime = n;
    }
    n += prime;
    int ans = ((m - n) / 2) + 1;
    int deff = m - n;
    if(deff % 2 != 0){
        ans++;
    }
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
