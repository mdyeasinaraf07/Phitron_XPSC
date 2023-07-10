#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(abs(v[i] - v[j]) == 1){
                cout<< 2<< endl;
                return;
            }
        }
    }
    cout<< 1<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
