#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>> n >> m;
    m = m * n;
    if(n > 8){
        cout<< "NO"<< endl;
    }
    else if(m <= 500){
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

