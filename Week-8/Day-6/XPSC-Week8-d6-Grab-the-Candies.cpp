#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    int mihai = 0;
    int bianca = 0;
    for(int i = 0; i < n; i++){
        cin>> v[i];
        if(v[i] % 2 == 0){
            mihai += v[i];
        }
        else{
            bianca += v[i];
        }
    }
    if(mihai > bianca){
        cout<< "YES\n";
    }
    else{
        cout<< "NO\n";
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
