#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    if(n * 4 <= 1000){
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
