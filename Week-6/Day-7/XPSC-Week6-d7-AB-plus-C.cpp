#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x;
    cin>> x;
    if(x == 1){
        cout<< -1<< endl;
    }
    else if(x <= 1000000){
        cout<< 1<< " "<< 1<< " "<< x - 1<< endl;
    }
    else{
        if(x % 1000000 != 0){
            cout<< 1000000<< " "<< x / 1000000<< " "<< x % 1000000<< endl;
        }
        else{
            cout<< 1000000<< " "<< (x / 1000000) - 1<< " "<< 1000000<< endl;
        }
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
