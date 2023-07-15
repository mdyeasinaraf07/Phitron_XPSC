#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>> n >> k;
    long long int ans = 1, mod = 1000000007;
    while(k >= 1){
        ans *= k;
        ans %= mod;
        k--;
        n--;
        if(n == 0){
            break;
        }
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
