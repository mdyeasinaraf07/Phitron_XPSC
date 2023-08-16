#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    int ans = 1, one = 0, zero = 0;
    for(int i = n - 1; i >= 0; i--){
        if(v[i] == 0 && v[i - 1] == 0){
            ans = -1;
            break;
        }
        else if(v[i] == 1 && v[i - 1] == 1){
            ans += 5;
        }
        else{
            ans += v[i];
        }
    }
    cout<< ans<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}


