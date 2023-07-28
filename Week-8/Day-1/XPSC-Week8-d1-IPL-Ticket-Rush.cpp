#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, m;
    cin>> n >> m;
    if(n <= m){
        cout<< 0<< endl;
    }
    else{
        cout<< n - m<< endl;
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


