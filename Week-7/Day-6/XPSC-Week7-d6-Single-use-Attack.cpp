#include <bits/stdc++.h>
using namespace std;

void solve(){
    int h, n, m;
    cin>> h >> n >> m;
    h -= m;
    int ans = (h / n) + 1;
    if(h % n != 0){
        ans++;
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

