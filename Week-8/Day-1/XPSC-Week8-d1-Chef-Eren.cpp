#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, a, b;
    cin>> n >> a >> b;
    ll sum = 0;
    while(n > 0){
        if(n & 1){
            sum += b;
        }
        else{
            sum += a;
        }
        n--;
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
