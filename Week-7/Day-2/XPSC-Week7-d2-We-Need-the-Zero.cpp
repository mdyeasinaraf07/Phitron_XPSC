#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    int ans = -1;
    for(int i = 0; i < (1 << 8); i++){
        vector <int> tmp;
        for(int j = 0; j < n; j++){
            int xorr = v[j] ^ i;
            tmp.push_back(xorr);
        }
        int x = tmp[0];
        for(int k = 1; k < n; k++){
            x ^= tmp[k];
        }
        if(x == 0){
            ans = i;
            break;
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
