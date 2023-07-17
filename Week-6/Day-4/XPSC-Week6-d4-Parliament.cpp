#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin>> n >> x;
    if(x * 2 >= n){
        cout<< "YES"<< endl;
    }
    else{
        cout<< "NO"<< endl;
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
