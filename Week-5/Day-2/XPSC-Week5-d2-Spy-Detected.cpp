#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    for(int i = 1; i < n - 1; i++){
        if((v[i] != v[i - 1]) && (v[i] != v[i + 1])){
            cout<< i + 1<< endl;
            return;
        }
    }
    if((v[0] != v[1]) && (v[0] != v[n - 1])){
        cout<< 1<< endl;
    }
    else{
        cout<< n<< endl;
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
