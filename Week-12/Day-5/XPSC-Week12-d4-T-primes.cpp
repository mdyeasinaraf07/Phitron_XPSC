#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(ll n){
    if(n % 2 == 0){
        return false;
    }
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
        if(is_prime(n)){
            cout<< 1<< endl;
        }
        else{
            if(if){
                cout<< 2<< endl;
            }
            else{
                int cnt = 0;
                while(!is_prime(n)){
                    n -= 2;
                    cnt++;
                }
                cnt++;
                cout<< cnt<< endl;
            }
        }
    }
}

int main(){
    solve();

    return 0;
}
