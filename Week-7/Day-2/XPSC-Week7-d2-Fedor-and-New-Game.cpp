#include <bits/stdc++.h>
using namespace std;

//int cnt(int n){
//    int cunt = 0;
//    while(n > 0){
//        if((n & 1) != 0){
//            cunt++;
//        }
//        n = n>>1;
//    }
//    return cunt;
//}

void solve(){
    int n, m, k;
    cin>> n >> m >> k;
    vector <int> v(m + 1);
    for(int i = 0; i <= m; i++){
        cin>> v[i];
    }
    int ans = 0;
    for(int i = 0; i < m; i++){
        if(__builtin_popcount(v[i] ^ v[m]) <= k){
            ans++;
        }
    }
    cout<< ans<< endl;
}

int main(){
    solve();

    return 0;
}
