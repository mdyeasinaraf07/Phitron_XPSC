#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>> n >> m;
    int tmp = (m * 6) * 6;
    if(n <= tmp){
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
