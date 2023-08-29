#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(ll n){
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n;
    cin>> n;
    if(n == 2){
        cout<< 1<< endl;
    }
    else{
        if(n % 2 == 0){
            cout<< 2<< endl;
        }
        else{
            if(is_prime(n)){
                cout<< 1<< endl;
            }
            else{
                if(is_prime(n - 2)){
                    cout<< 2<< endl;
                }
                else{
                    cout<< 3<< endl;
                }
            }
        }
    }
}

int main(){
    solve();

    return 0;
}
