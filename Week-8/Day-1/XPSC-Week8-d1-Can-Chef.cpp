#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, m;
    cin>> n >> m;
    n *= 15;
    m *= 2;
    if(n < m){
        cout<< "NO"<< endl;
    }
    else{
        cout<< "YES"<< endl;
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



