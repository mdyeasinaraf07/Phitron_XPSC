#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, l;
    cin>> n >> k >> l;
    multiset <int, greater <int> > ms;
    for(int i = 0; i < n; i++){
        int tmp1, tmp2;
        cin>> tmp1>> tmp2;
        if(tmp2 == l){
            ms.insert(tmp1);
        }
    }
    if(ms.size() < k){
        cout<< -1<< endl;
    }
    else{
        int ans = 0;
        for(auto it: ms){
            if(k > 0){
                ans += it;
            }
            k--;
        }
        cout<< ans<< endl;
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
